#pragma once 

#include <string>

namespace MyModule{

class MyString {
private:
    std::string value;

public:
    MyString(const std::string& val);
    MyString(const char* val);
    const std::string& toStdString() const;
    MyString operator+(const MyString& other) const;
};
}