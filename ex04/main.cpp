/* Any copyright is dedicated to the Public Domain.
 * https://creativecommons.org/publicdomain/zero/1.0/ */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#define REPLACE_FILENAME_SUFFIX ".replace"

std::string replace(const std::string& s, const std::string& from, const std::string& to)
{
    std::string text = s;
    size_t pos = 0;
    while ((pos = text.find(from, pos)) != std::string::npos)
    {
        text.erase(pos, from.length());
        text.insert(pos, to);
        pos += to.length();
    }
    return text;
}

int main(int argc, char* argv[])
{
    if (argc <= 3)
    {
        std::cout << "usage: " << argv[0] << " filename string_from string_to" << std::endl;
        return EXIT_FAILURE;
    }
    if (std::strlen(argv[2]) == 0)
    {
        std::cout << argv[0] << ": from string cannot be empty." << std::endl;
        return EXIT_FAILURE;
    }
    std::stringstream ss;
    std::string replaceFilename = std::string(argv[1]) + REPLACE_FILENAME_SUFFIX;
    {
        std::ifstream ifs(argv[1], std::ifstream::in);
        if (!ifs)
        {
            std::cout << argv[0] << ": " << argv[1] << ": Read failed." << std::endl;
            return EXIT_FAILURE;
        }
        ss << ifs.rdbuf();
    }
    std::string text = replace(ss.str(), argv[2], argv[3]);
    std::ofstream ofs(replaceFilename, std::ofstream::out | std::ofstream::trunc);
    ofs << text;
    if (!ofs)
    {
        std::cout << argv[0] << ": " << replaceFilename << ": Write failed." << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
