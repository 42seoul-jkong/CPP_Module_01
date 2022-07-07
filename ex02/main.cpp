/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    // The memory address
    std::cout << std::setw(48) << "The memory address of the string variable: "
              << &string << std::endl;
    std::cout << std::setw(48) << "The memory address held by stringPTR: "
              << stringPTR << std::endl;
    std::cout << std::setw(48) << "The memory address held by stringREF: "
              << &stringREF << std::endl;

    // The value
    std::cout << std::setw(48) << "The value of the string variable: "
              << string << std::endl;
    std::cout << std::setw(48) << "The value pointed to by stringPTR: "
              << *stringPTR << std::endl;
    std::cout << std::setw(48) << "The value pointed to by stringREF: "
              << stringREF << std::endl;

    return 0;
}
