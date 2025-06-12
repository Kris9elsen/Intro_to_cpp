#ifndef COINCOLLECTION_H
#define COINCOLLECTION_H

#pragma once

#include "../headers/Coin.h"

#include <string>

class CoinCollection {
public:
    CoinCollection();
    ~CoinCollection();

    int getTotalValue() const;
    int getTotalValueDecade(int) const;
    void addCoin(Coin);

private:
    Coin coins[300];
    int totalCoins = 0;

};

#endif