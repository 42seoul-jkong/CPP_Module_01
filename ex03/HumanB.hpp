/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
private:
    Weapon* Weapon;
    const std::string name;

public:
    HumanB(const std::string& name);
    void attack();
    void setWeapon(::Weapon& Weapon);
};
