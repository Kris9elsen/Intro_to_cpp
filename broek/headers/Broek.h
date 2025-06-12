#ifndef BROEK_H
#define BROEK_H

#pragma once

#include <stdexcept>

class Broek {
public:
    Broek(void);
    ~Broek(void);
    Broek(int aN, int aD);

    Broek adder(Broek aF);
    Broek subtraher(Broek aF);
    Broek multiplicer(Broek aF);
    Broek divider(Broek aF);
    Broek operator+(Broek b);
    Broek operator-(Broek b);
    Broek operator*(Broek b);
    Broek operator/(Broek b);

    int getTaeller() const;
    int getNaevner() const;


private:
    int taeller;
    int naevner;

};

#endif