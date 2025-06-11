#ifndef STRING_HPP
#define STRING_HPP

#pragma once

#include <string>
#include <algorithm>

class String {
public:
    String();
    ~String();

    int countChar(std::string, char);
    std::string reverse(std::string);
    std::string everyOther(std::string);
    int addNumbers(std::string, std::string);
    bool containsWord(std::string, std::string);

private:

};

#endif