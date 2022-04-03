from .core import create_image
from ._math_defs import float4
import numpy as np
import cupy as cp
import time


import os
__CURRENT_PATH__ = os.path.dirname(__file__)
os.environ["PYSDL2_DLL_PATH"] = __CURRENT_PATH__ + "/third-party/SDL2"
import sdl2
import sdl2.ext
import ctypes
from enum import Enum


class Event(Enum):
    NONE = 0
    CLOSED = 1


class Presenter:
    def __init__(self, width, height, offline: bool):
        self.width = width
        self.height = height
        self.offline = offline
        self.window = None
        if not offline:
            if sdl2.SDL_Init(sdl2.SDL_INIT_VIDEO) != 0:
                raise Exception(sdl2.SDL_GetError())
            self.window = sdl2.SDL_CreateWindow(
                'CG Window'.encode('ascii'),
                sdl2.SDL_WINDOWPOS_UNDEFINED,
                sdl2.SDL_WINDOWPOS_UNDEFINED, self.width, self.height, 0)
            self.sdl_renderer = sdl2.SDL_CreateRenderer(self.window, -1, sdl2.SDL_RENDERER_ACCELERATED)
            self.sdl_texture = sdl2.SDL_CreateTexture(
                self.sdl_renderer,
                sdl2.SDL_PIXELFORMAT_BGRA32,
                sdl2.SDL_TEXTUREACCESS_STREAMING,
                self.width, self.height
            )
            self.event = sdl2.SDL_Event()
        self.render_target = create_image((self.width, self.height), 16)
        self.last_time = None

    def get_render_target(self):
        return self.render_target

    def is_alive(self):
        return not self.offline

    def poll_events(self) -> (Event, object):
        if self.offline:
            return Event.CLOSED, None

        if sdl2.SDL_PollEvent(ctypes.byref(self.event)) != 0:
            if self.event.type == sdl2.SDL_QUIT:
                return Event.CLOSED, None

        return Event.NONE, None

    def _copy_render_target(self, buffer):
        # normalized_rt = self.render_target.cupy().view(cp.float32)
        # normalized_rt = cp.clip(normalized_rt, 0, 0.9999) * 256
        # buffer[:] = normalized_rt.view(cp.uint8).get()
        buffer[:] = self.render_target.numpy()

    def present(self):
        if self.offline:
            return
        # lock texture
        pixel_ptr = ctypes.c_void_p()
        pitch = ctypes.c_int()
        sdl2.SDL_LockTexture(
            self.sdl_texture,
            None,
            ctypes.byref(pixel_ptr),
            ctypes.byref(pitch)
        )
        full_image = ctypes.c_char*self.width*self.height*4
        buffer = np.frombuffer(full_image.from_address(pixel_ptr.value), dtype=np.uint8)
        self._copy_render_target(buffer)
        sdl2.SDL_UnlockTexture(self.sdl_texture)
        sdl2.SDL_RenderCopy(self.sdl_renderer, self.sdl_texture, None, None)
        sdl2.SDL_RenderPresent(self.sdl_renderer)
        if self.last_time is not None:
            duration = time.perf_counter() - self.last_time
            FPS = 1 / max(0.00000001, duration)
            sdl2.SDL_SetWindowTitle(self.window, bytes(f"FPS: {FPS}", "utf8"))
        self.last_time = time.perf_counter()


def create_presenter(width: int, height: int) -> Presenter:
    return Presenter(width, height, False)

