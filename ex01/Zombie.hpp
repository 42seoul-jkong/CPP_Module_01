/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include <string>

#define ZOMBIE_MESSAGE "BraiiiiiiinnnzzzZ..."

class Zombie
{
private:
    std::string name;

public:
    Zombie();
    ~Zombie();
    void Initialize(const std::string& name);
    void announcee();
};

Zombie* zombieHorde(int N, std::string name);
