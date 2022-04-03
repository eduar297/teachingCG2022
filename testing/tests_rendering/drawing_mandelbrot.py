import rendering as ren
import time
import math

image_width = 512
image_height = 512

presenter = ren.create_presenter(image_width, image_height)

mandelbrot_info = ren.create_struct_buffer(N=int, C=ren.float2)

draw_mandelbrot_kernel = ren.create_kernel('mandelbrot.cu')

start_time = time.perf_counter()

while True:
    event, arg = presenter.poll_events()
    if event == ren.Event.CLOSED:
        break

    t = time.perf_counter() - start_time

    mandelbrot_info.N = 100
    mandelbrot_info.C = ren.float2(0.09 + math.cos(t*0.7)*0.01, 0.61 + math.sin(t)*0.01)

    draw_mandelbrot_kernel.dispatch(
        image_width * image_height,
        image_width, image_height, mandelbrot_info.descriptor(), presenter.get_render_target().descriptor()
    )
    presenter.present()





