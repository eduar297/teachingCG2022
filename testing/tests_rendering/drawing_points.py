import rendering as ren
import numpy as np


p = ren.create_presenter(1024, 512)

while True:
    e, args = p.poll_events()
    if e == ren.Event.CLOSED:
        break
    y = np.random.randint(0, 512)
    x = np.random.randint(0, 1024)
    p.get_render_target()[x,y] = 0xFFFFFF00
    p.present()