import numpy as np
x = np.random.rand(3,2)
y = np.random.rand(1,3,2)

z = x + y
print(z.shape)