#!/usr/bin/env python

"""
setup.py file for SWIG tutorial
"""

from distutils.core import setup, Extension


tutorial_module = Extension('_square',
                           sources=['square.cpp', 'square_wrap.cxx'],
                           )

setup (name = 'tutorial',
       version = '0.1',
       author      = "Sanuj Sharma",
       description = """Simple swig tutorial from c++ classes""",
       ext_modules = [tutorial_module],
       py_modules = ["tutorial"],
       )