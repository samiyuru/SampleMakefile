#ifndef PROGRAM_AUTHOR_H
#define PROGRAM_AUTHOR_H

#include <string>

struct Author {
public:
    std::string name;
    std::string email;

    Author(std::string name, std::string email) : name(name), email(email) {}
};

#endif
