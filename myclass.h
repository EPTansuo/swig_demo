#include <iostream>
#include "mystring.h"

namespace MyModule{
class MyClass {
private:
    int value;

public:
    MyClass(int val);
    int getValue() const;
    void setValue(int val);
	void myprint();
    std::string __str__();
    MyString getStrValue() const;
};

}