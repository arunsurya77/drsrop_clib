from distutils.core import setup
from Cython.Build import cythonize
from distutils.extension import Extension

sourcefiles = ['drsrop_clib.pyx', 'drsrop.c']

extensions = [Extension("drsrop_clib", sourcefiles)]

setup(
    ext_modules = cythonize(extensions)
)
