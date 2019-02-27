cimport drsrop_clib
import numpy as np
cimport numpy as np

def uptheramp_c(int[:,:,:] arr_f, int[:] arr_time):
    cdef float[:,:] results = <float[:arr_f.shape[1],:arr_f.shape[2]]> drsrop_clib.uptheramp(&arr_f[0,0,0], &arr_time[0], arr_f.shape[0], arr_f.shape[1], arr_f.shape[2])
    return np.asarray(results)
    
