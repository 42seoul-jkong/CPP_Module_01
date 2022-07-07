/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#pragma once

#include <string>

class Harl
{
private:
    void debug();
    void info();
    void warning();
    void error();

public:
    void complain(std::string level);
};

enum HarlLevel
{
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

struct HarlLevelEntry
{
    const char* str;
    void (Harl::*const pfn)();
};
