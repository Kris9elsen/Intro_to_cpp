#ifndef COIN_H
#define COIN_H

#pragma once

#include "../headers/Country.h"

#include <string>

class Coin {
public:
    Coin();
    ~Coin();
    Coin(Country&, int, int, std::string, int, int);

    void changeValue(int);

    const Country& getCountry() const;
    int getCatalogueNumber() const;
    int getYearIssued() const;
    std::string getMotive() const;
    int getFaceValue() const;
    int getValue() const;

private:
    Country country;
    int catalogueNumber;
    int yearIssued;
    std::string motive;
    int faceValue;
    int value;

};

#endif