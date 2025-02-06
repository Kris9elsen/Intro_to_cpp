#ifndef BIL_H
#define BIL_H

#pragma once

#include <string>
#include "Person.h"

using namespace std;

class Bil{
public:
    Bil(); // Constructor
    Bil(Person, string, string, string); // RegNr, make, model
    ~Bil(); // Destructor

    // Getters
    Person get_owner();
    string get_reg();
    string get_make();
    string get_model();

private:
    Person owner;
    string reg;
    string make;
    string model;
};

#endif