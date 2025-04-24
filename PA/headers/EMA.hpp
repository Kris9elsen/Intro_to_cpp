#ifndef EMA_H
#define EMA_H

#pragma once

#include <string>

using namespace std;

class EMA
{
public:
    EMA();
    EMA(string);
    ~EMA();

    bool isValid() const;

    string getEMA();

    void setEMA(string);

private:
    int snabelA() const;
    bool dot() const;
    bool checkLengths() const;
    bool checkChars() const;

    string emailAddress;

};

#endif