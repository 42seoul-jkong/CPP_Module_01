/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[])
{
    std::string zombieName;
    if (argc > 1)
    {
        zombieName = argv[1];
    }
    else
    {
        zombieName = "Foo";
    }
    int n;
    if (argc > 2)
    {
        n = std::atoi(argv[2]);
    }
    else
    {
        n = 1;
    }
    if (n < 0)
    {
        std::cout << "N must be positive or zero." << std::endl;
        return EXIT_FAILURE;
    }
    Zombie* horde = zombieHorde(n, zombieName);
    for (int i = 0; i < n; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return EXIT_SUCCESS;
}
