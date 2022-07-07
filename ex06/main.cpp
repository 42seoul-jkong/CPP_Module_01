/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cout << "Only one argument is allowed." << std::endl;
        return EXIT_FAILURE;
    }
    Harl().complain(argv[1]);
    return EXIT_SUCCESS;
}
