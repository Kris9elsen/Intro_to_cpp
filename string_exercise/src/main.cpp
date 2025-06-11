#include "../headers/String.hpp"

#include <iostream>
#include <string>

int main() {
    std::string str = "HELLO C++";
    String s = String();

    std::cout << s.countChar(str, '+') << std::endl;
    std::cout << s.reverse(str) << std::endl;
    std::cout << s.everyOther(str) << std::endl;
    std::cout << s.addNumbers("100", "100") << std::endl;
    std::cout << s.containsWord(str, "C++") << std::endl;

    return 0;
}