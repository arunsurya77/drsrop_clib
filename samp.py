import numpy as np
from cy_quicksort import quicksort_c
arr=np.array([[[1,2,3],[4,5,6],[7,8,9]],[[10,11,12],[13,14,15],[16,17,18]]],dtype=np.int32)
print quicksort_c(arr)
