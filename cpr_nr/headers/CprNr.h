#ifndef CPRNR_H
#define CPRNR_H

#pragma once

#include <string>
#include <ctime>
#include "Dato.h"

using namespace std;

class CprNr
{
public:
    CprNr();
    ~CprNr();
    CprNr(string); // Construtor 10 cifret cprNr

    // Getter
    string getCprNr(); // Returns cprNr
    int getDag(); // Returns day of birth DD
    int getMaaned(); // Returns birth month MM
    int getAar(); // Returns birth year YYYY
    int getDato(); // Returns birth date YYYYMMDD
    int getAlder(); // Returns age in years
    bool erMand(); // Returns true if is man
    bool erKvinde(); // Returns true if is woman
    bool isValid(); // Returns true if cprNr is valid


    // Setters
    void setCprNr(string); // Sets new cprNr

private:
    string nummeret;

};

#endif