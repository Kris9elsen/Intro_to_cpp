#include "../headers/Coin.h"

Coin::Coin() {}
Coin::~Coin() {}

Coin::Coin(Country &_country, int _catalogueNumber, int _yearIssued, std::string _motive, int _faceValue, int _value) {
    country = _country;
    catalogueNumber = _catalogueNumber;
    yearIssued = _yearIssued;
    motive = _motive;
    faceValue = _faceValue;
    value = _value;
}

void Coin::changeValue(int newValue) {
    value = newValue;

    return;
}

const Country& Coin::getCountry() const {
    return country;
}

int Coin::getCatalogueNumber() const {
    return catalogueNumber;
}

int Coin::getYearIssued() const {
    return yearIssued;
}

std::string Coin::getMotive() const {
    return motive;
}

int Coin::getFaceValue() const {
    return faceValue;
}

int Coin::getValue() const {
    return value;
}