/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include "Harl.hpp"
#include <iostream>

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn't put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable!" << std::endl;
    std::cout << "I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    HarlLevelEntry cls[] = {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error},
    };
    const std::size_t count = sizeof(cls) / sizeof(cls[0]);
    std::size_t i;
    for (i = 0; i < count; i++)
    {
        if (level == cls[i].str)
        {
            break;
        }
    }
    void (Harl::*pfn)();
    switch (i)
    {
    case DEBUG:
        pfn = cls[DEBUG].pfn;
        (this->*pfn)();
        break;

    case INFO:
        pfn = cls[INFO].pfn;
        (this->*pfn)();
        break;

    case WARNING:
        pfn = cls[WARNING].pfn;
        (this->*pfn)();
        break;

    case ERROR:
        pfn = cls[ERROR].pfn;
        (this->*pfn)();
        break;

    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}
