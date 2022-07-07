/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
    // No-OP
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " has been destroyed." << std::endl;
}

void Zombie::Initialize(const std::string& name)
{
    this->name = name;
}

void Zombie::announcee()
{
    std::cout << this->name << ": " << ZOMBIE_MESSAGE << std::endl;
}
