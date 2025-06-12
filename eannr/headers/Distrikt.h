#ifndef DISTRIKT_H
#define DISTRIKT_H

#pragma once

#include "Forbruger.h"

#include <vector>

class Distrikt
{
public:
    Distrikt();
    ~Distrikt();
    Distrikt(int);

    void addForbruger(Forbruger&);
    int afregnForbruger(int);

private:
    std::vector<Forbruger*> forbrugere;
    int antalForbrugere;
    int prisM3;

};

#endif