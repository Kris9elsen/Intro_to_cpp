#include "../headers/Country.h"
#include "../headers/Coin.h"
#include "../headers/CoinCollection.h"

#include <iostream>

bool neighbors(std::string str) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i]+1 == str[i+1]) return true;
    }

    return false;
}


int main() {
    CoinCollection coinC; 
    Country d( "Denmark");    
    Coin c1(d, 12, 1953, "Frederik 9.", 2, 23); 
    coinC.addCoin(c1); 
    Coin c2(d, 12, 1945, "Christian 10.", 1, 38); 
    coinC.addCoin(c2); 
    Coin c3(d, 12, 1965, "Frederik 9.", 5, 17); 
    coinC.addCoin(c3); 
    Coin c4(d, 12, 1988, "Margrethe 2.", 10, 15); 
    coinC.addCoin(c4); 
    Coin c5(d, 12, 1999, "Margrethe 2.", 20, 24); 
    coinC.addCoin(c5); 
    Coin c6(d, 12, 1948, "Frederik 9.", 1, 56); 
    coinC.addCoin(c6); 
    c3.changeValue(-5); 
    std::cout <<   "Total value: " <<   coinC.getTotalValue() <<   std::endl; // 168 cout <<   "Decade value 1940's: " <<   coinC.getTotalValueDecade(194); // 94

    return 0;
}