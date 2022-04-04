import rendering as ren

v = ren.float3(1,2,3)
m = ren.float3x3(1, 0, 0, 0, 1, 0, 0, 0, 2)
w = ren.mul(v, m)

print(w)
print(ren.sin(v))