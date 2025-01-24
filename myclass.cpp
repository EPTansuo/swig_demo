

#include "myclass.h"

namespace MyModule{
MyClass::MyClass(int val) : value(val) {
    std::cout << "MyClass constructor" << std::endl;
}

int MyClass::getValue() const {
    return value;
}

void MyClass::setValue(int val) {
    value = val;
}

void MyClass::myprint() {
    std::cout << "Value: " << value << std::endl;
}

std::string MyClass::__str__(){
    return "Value: " + std::to_string(value);
}

MyString MyClass::getStrValue() const {
    return MyString("getStrValue: ") + MyString(std::to_string(value));
}
}
