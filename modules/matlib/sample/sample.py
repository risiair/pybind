import numpy as np
import cv2

transform = cv2.matlib_transform()
arr = np.zeros((3,3))
arr = transform.Inc(arr)
print("after inc in numpy: ", arr)
