cdef extern from "drsrop.h":
    float* uptheramp (int* arr, int* time, int a, int b, int c)
    float* mcds (int* arr, int* time, int a, int b, int c, int num_coadd)
    float* nonlin_corr (int* arr, int* time, int a, int b, int c, int x0, int y0, float* c0, float* c1, float* c2, float* c3, float* c4)
