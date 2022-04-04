import rendering as ren
import numpy as np


# create a one dimensional grid of blocks (1),
# every block with one dimensional group of 5 threads
# this kernel receives 3 arrays
add_kernel = ren.create_kernel('test.cuh', 5)
x1 : ren.Buffer = ren.create_buffer(25 * 4 * 4).copy_from(np.arange(0, 100, 1, dtype=np.float32))
x2 : ren.Buffer = ren.create_buffer(25 * 4 * 4).copy_from(np.arange(0, 100, 1, dtype=np.float32))
y : ren.Buffer = ren.create_buffer(25 * 4 * 4)

add_kernel.dispatch(25, x1.cupy(), x2.cupy(), y.cupy())

print(y.numpy(np.float32).reshape(5,5,4))

