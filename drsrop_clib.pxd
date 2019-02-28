cdef extern from "drsrop.h":
    float* uptheramp (int* arr, int* time, int a, int b, int c)
    float* mcds (int* arr, int* time, int a, int b, int c, int num_coadd)
