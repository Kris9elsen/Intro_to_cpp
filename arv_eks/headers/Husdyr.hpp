#ifndef HUSDYR_H
#define HUSDYR_H

#pragma once

#include <string>

using namespace std;

class Husdyr {
public:
    Husdyr();
    ~Husdyr();
    Husdyr(const string, const string);
    virtual string givLyd();

protected:
    string ejersNavn;
    string telefonnr;
    
};

#endif