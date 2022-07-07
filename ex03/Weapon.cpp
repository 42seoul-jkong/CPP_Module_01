/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
    : type(type)
{
    // No-OP
}

const std::string& Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(const std::string& type)
{
    this->type = type;
}
