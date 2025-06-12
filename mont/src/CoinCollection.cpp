#include "CoinCollection.h"

CoinCollection::CoinCollection() {}
CoinCollection::~CoinCollection() {}

void CoinCollection::addCoin(Coin coin) {
    coins[totalCoins] = coin;
    totalCoins++;

    return;
}

int CoinCollection::getTotalValue() const {
    int total = 0;
    for (int i = 0; i < totalCoins; i++) {
        total += coins[i].getValue();
    }

    return total;
}

int CoinCollection::getTotalValueDecade(int decade) const {
    int total = 0;
    for (int i = 0; i < totalCoins; i++) {
        if (coins[i].getValue() % 100 >= decade && coins[i].getValue() % 100 < decade+10) {
            total += coins[i].getValue();
        }
    }

    return total;
}