import rendering as ren
import numpy as np


vertices_in = ren.create_structured_buffer(6,
                                           P=ren.float3,  # position
                                           C=ren.float3,  # color
                                           )


vertices_out = ren.create_structured_buffer(6,
                                            P=ren.float4,  # projected position
                                            C=ren.float3,  # color
                                            )

print(vertices_in.numpy(dtype=np.float32))
print(vertices_out.numpy(dtype=np.float32))

# fill data
for v in vertices_in:
    # iterating over a structured buffer create struct buffers to access each element
    # every field in structured buffer layout can be accessed
    v.P = ren.float3(np.random.uniform(size=(3,)))
    v.C = ren.float3(1,1,0)

transforms = ren.create_struct_buffer(
    WorldTransform=ren.float4x4
)
transforms.WorldTransform = ren.float4x4(1,0,0,0, 0,1,0,0, 0,0,1,0, 1,1,0,1) # to be changed

# create a one dimensional grid of blocks (1),
# every block with one dimensional group of 5 threads
# this kernel receives 1 constant and 3 arrays (N, v_in, transform, v_out)
transform_kernel = ren.create_kernel('transform.cuh', 5)
# execute a grid of 2 blocks (2 blocks * 5 threads >= 6 global indices)
transform_kernel.dispatch(6,
    len(vertices_in), # constant (int or float, or cupy types, e.g. cupy.uint32(...))
    vertices_in.descriptor(),  # ask to create a descriptor for the resource.
    ren.float4x4(1,0,0,0, 0,1,0,0, 0,0,1,0, 1,1,0,1).cupy(), # cupy arrays can be also bind directly.
    vertices_out.descriptor()
)

print(vertices_in.numpy(dtype=np.float32))
print(vertices_out.numpy(dtype=np.float32))

