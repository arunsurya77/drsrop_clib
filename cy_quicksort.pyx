cimport quicksort
import numpy as np
cimport numpy as np

def quicksort_c(int[:,:,:] arr):
    cdef int[::1, :,:] arr_f = arr.copy_fortran()
    cdef int[::1, :,:] results = <int[::1, :, :]> quicksort.quick_sort(&arr_f[0,0,0], arr_f.shape[0], arr_f.shape[1], arr_f.shape[2])
    return np.asarray(results)
    
