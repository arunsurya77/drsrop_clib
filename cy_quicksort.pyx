cimport quicksort
import numpy as np
cimport numpy as np

def quicksort_c(int[:,:,:] arr_f):
    cdef int[:,:,:] results = <int[:arr_f.shape[0],:arr_f.shape[1],:arr_f.shape[2]]> quicksort.quick_sort(&arr_f[0,0,0], arr_f.shape[0], arr_f.shape[1], arr_f.shape[2])
    return np.asarray(results)
    
