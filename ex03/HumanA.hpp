/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
private:
    Weapon& Weapon;
    const std::string name;

public:
    HumanA(const std::string& name, ::Weapon& Weapon);
    void attack();
};
