from setuptools import setup, Extension
from Cython.Distutils import build_ext
from Cython.Build import cythonize
import numpy as np

NAME = "drsrop_clib"
VERSION = "0.1"
DESCR = "A small template project that shows how to wrap C/C++ code into python using Cython"
URL = "http://www.google.com"
REQUIRES = ['numpy', 'cython','sphinx-astropy']

AUTHOR = "Arun Surya"
EMAIL = "asurya@ucsd.edu"

LICENSE = "Apache 2.0"

SRC_DIR = "drsrop_clib"
PACKAGES = [SRC_DIR]

ext_1 = Extension(SRC_DIR + ".drsrop_clib",
                  [SRC_DIR + "/drsrop.c", SRC_DIR + "/drsrop_clib.pyx"],
                  libraries=['cfitsio'],
                  include_dirs=[np.get_include()])


EXTENSIONS = [ext_1]

if __name__ == "__main__":
    setup(install_requires=REQUIRES,
          packages=PACKAGES,
          zip_safe=False,
          name=NAME,
          version=VERSION,
          description=DESCR,
          author=AUTHOR,
          author_email=EMAIL,
          url=URL,
          license=LICENSE,
          cmdclass={"build_ext": build_ext},
          ext_modules= cythonize(EXTENSIONS)
          )


