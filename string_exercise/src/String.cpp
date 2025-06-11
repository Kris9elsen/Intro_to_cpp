#include "../headers/String.hpp"

String::String() {}
String::~String() {}

// Returns the occurence of the given char in the given string
int String::countChar(std::string str, char ch) {
    return std::count(str.begin(), str.end(), ch);
}

// Returns the reversed string
std::string String::reverse(std::string str) {
    std::reverse(str.begin(), str.end());
    return str;
}

// Returns string with everyother char removed
std::string String::everyOther(std::string str) {
    int j = 0;
    for (int i = 0; i < str.size(); i += 2) {
        str[j++] = str[i];
    }
    str.resize(j);

    return str;
}

// Returns sum of string integer value
int String::addNumbers(std::string str1, std::string str2) {
    return stoi(str1) + stoi(str2);
}

bool String::containsWord(std::string str, std::string word) {
    return str.find(word) != std::string::npos;
}