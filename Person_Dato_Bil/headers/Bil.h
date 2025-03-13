#ifndef BIL_H
#define BIL_H

#pragma once

#include <string>

using namespace std;

class Bil{
public:
    Bil(); // Constructor
    Bil(string, string, string, int); // RegNr, make, model
    ~Bil(); // Destructor

    // Getters
    string get_reg();
    string get_make();
    string get_model();
    int get_year();

private:
    string reg;
    string make;
    string model;
    int year;
};

#endif