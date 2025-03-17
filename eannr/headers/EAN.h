#ifndef EAN_H
#define EAN_H

#pragma once

#include <string>
#include <vector>
#include <numeric>

using namespace std;

class EAN
{
public:
    EAN();
    ~EAN();
    EAN(string);

    bool isValid();

private:
    string eanNr;
    int eanSize = 13;

};

#endif