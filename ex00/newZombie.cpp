/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}
