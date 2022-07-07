/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, ::Weapon& Weapon)
    : Weapon(Weapon), name(name)
{
    // No-OP
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->Weapon.getType() << std::endl;
}
