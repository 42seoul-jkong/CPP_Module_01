/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name)
    : Weapon(NULL), name(name)
{
    // No-OP
}

void HumanB::attack()
{
    if (this->Weapon)
    {
        std::cout << this->name << " attacks with their " << this->Weapon->getType() << std::endl;
    }
}

void HumanB::setWeapon(::Weapon& Weapon)
{
    this->Weapon = &Weapon;
}
