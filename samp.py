import numpy as np
from drsrop_clib import uptheramp_c
arr=np.array([[[1,2,3],[4,5,6],[7,8,9]],[[10,11,12],[13,14,15],[16,17,18]]],dtype=np.int32)
arr=np.array([np.zeros([10,10]),np.ones([10,10])*4,np.ones([10,10])*8,np.ones([10,10])*12],dtype=np.int32)
time_arr=np.array([0,1,2,3],dtype=np.int32)
kaka=uptheramp_c(arr,time_arr)
print kaka
