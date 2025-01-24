#!/bin/env python

from mymodule import MyClass,MyString



obj = MyClass(10)

print(obj.getValue())

obj.myprint()

obj.setValue(20)
obj.myprint()

print(obj)

print(obj.getStrValue())

s = MyString("abc")
s = s + MyString("ss")
print(s)


