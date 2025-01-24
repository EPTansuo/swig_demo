#include "mystring.h"

namespace MyModule{
MyString::MyString(const std::string& val) : value(val) {}

MyString::MyString(const char* val) : value(val) {}

const std::string& MyString::toStdString() const {
    return value;
}

MyString MyString::operator+(const MyString& other) const {
    return MyString(value + other.value);
}

}