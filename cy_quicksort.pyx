cimport quicksort

def quicksort_c(int[:,:,:] arr):
    cdef int[::1, :,:] arr_f = arr.copy_fortran()
    print arr_f.shape[0]
    quicksort.quick_sort(&arr_f[0,0,0], arr_f.shape[0], arr_f.shape[1], arr_f.shape[2])
