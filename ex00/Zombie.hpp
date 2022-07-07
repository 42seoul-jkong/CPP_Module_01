/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include <string>

#define ZOMBIE_MESSAGE "BraiiiiiiinnnzzzZ..."

class Zombie
{
private:
    const std::string name;

public:
    Zombie(std::string name);
    ~Zombie();
    void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
