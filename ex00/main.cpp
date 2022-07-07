/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Zombie.hpp"
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
    {
        std::cout << "---------------- newZombie ---------------" << std::endl;
        Zombie* zombie = newZombie(zombieName);
        zombie->announcee();
        delete zombie;
        std::cout << "------------------------------------------" << std::endl;
    }
    std::cout << std::endl
              << std::endl;
    {
        std::cout << "--------------- randomChump --------------" << std::endl;
        randomChump(zombieName);
        std::cout << "------------------------------------------" << std::endl;
    }
    return 0;
}
