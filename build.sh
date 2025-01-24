#/bin/env sh

swig -python -c++ mymodule.i
g++ -shared -o _mymodule.so -fPIC  myclass.cpp mystring.cpp mymodule_wrap.cxx  -I/usr/include/python3.13

