#ifndef HUND_H
#define HUND_H

#pragma once

#include "Husdyr.hpp"
#include <string>

class Hund: public Husdyr {
public:
    Hund();
    ~Hund();
    Hund(const string, const string, const string, int);
    string givLyd() override;

protected:
    string race;
    int vaegt;

};

#endif