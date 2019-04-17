# DRS-ROP Cython Package

This package is a cython extension package for the DRS-ROP C library. It has the following modules
* Sampling Algorithms
    * Correlated Double Sampling Algorithm ( CDS )
    * Multiple Correlated Double Sampling  ( MCDS )
    * Up-the-Ramp Algorithm ( UTR )
* Non-linearity Correction


The top-level directory to run the scripts is drsrop_clib


The directory structure is given below.

```
├── drsrop_clib  [Toplevel Directory]
│   ├── data
│   │   ├── coeff0.fits
│   │   ├── coeff1.fits
│   │   ├── coeff2.fits
│   │   ├── coeff3.fits
│   │   ├── coeff4.fits
│   ├── doc
│   ├── drsrop_clib
│   │   ├── detrsrop.c
│   │   ├── drsrop.h
│   │   ├── drsrop_clib.pxd
│   │   └── drsrop_clib.pyx
│   ├──  setup.py
```

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. 

### Prerequisites

The modules are built for Python 3.6. The following external libraries are required for running the modules.

```
numpy
cython
python 3.6
```

### Installing

These can be installed using pip. if you have multiple python enviornments use pip3. The packages are listed in requirements.txt. 

```
pip install -e .
```

## Running the modules

One can import the package as below
```
from drsrop_clib import uptheramp_c,mcds_c,nonlin_c
```
The following is an example of a sample ramp and its processing
```
import numpy as np
from drsrop_clib import uptheramp_c,mcds_c
ramp=np.array([np.zeros([10,10]),np.ones([10,10])*4,np.ones([10,10])*8,np.ones([10,10])*12],dtype=np.int32)
time_arr=np.array([0,1000,2000,3000],dtype=np.int32)
output_utr=uptheramp_c(ramp,time_arr)
output_mcds=mcds_c(ramp,time_arr,2)
output_cds=mcds_c(arr,time_arr,1)
```


## Deployment

Just a Prototype


## Authors

* **Arun Surya**
arunsuryaoffice@gmail.com 


