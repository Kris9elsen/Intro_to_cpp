#include "CprNr.h"

CprNr::CprNr() {}

CprNr::~CprNr() {}

CprNr::CprNr(string etCprNr) {
    nummeret = etCprNr;
}

// Getters
string CprNr::getCprNr() {
    return nummeret;
}

int CprNr::getDag() {
    return stoi(nummeret.substr(0, 2));
}

int CprNr::getMaaned() {
    return stoi(nummeret.substr(2, 2));
}

int CprNr::getAar() {
    int year = stoi(nummeret.substr(6, 1));
    if (-1 < year && year < 4) return 1900 + stoi(nummeret.substr(4, 2));
    if (3 < year && year < 6) return 1800 + stoi(nummeret.substr(4, 2));
    return 2000 + stoi(nummeret.substr(4, 2));
}

int CprNr::getDato() {
    return (getAar()*10000) + (getMaaned()*100) + getDag();
}

int CprNr::getAlder() {
    time_t time = std::time(nullptr);
    return (std::localtime(&time)->tm_year + 1900) - getAar();
}

bool CprNr::erMand() {
    return stoi(nummeret.substr(9, 1)) % 2 == 1;
}

bool CprNr::erKvinde() {
    return !erMand();
}

bool CprNr::isValid() {
    try {
        stoi(nummeret);
    } catch (const exception& e) {
        return false;
    }

    if (nummeret.length() != 10) return false;
    if (!Dato(getDato()).get_is_valid()) return false;

    int wheight[10] = {4, 3, 2, 7, 6, 5, 4, 3, 2, 1};
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += stoi(nummeret.substr(i, 1))*wheight[i];
    }

    if (sum % 11 == 0) return 0;

    return false;

}

// Setters
void CprNr::setCprNr(string etCprNr) {
    nummeret = etCprNr;
}