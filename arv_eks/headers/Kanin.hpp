#ifndef KANIN_H
#define KANIN_H

#pragma once

#include "Husdyr.hpp"

class Kanin: public Husdyr {
public:
    Kanin();
    ~Kanin();
    Kanin(const string, const string, const string, int);

protected:
    string farve;
    int vaegt;

};

#endif