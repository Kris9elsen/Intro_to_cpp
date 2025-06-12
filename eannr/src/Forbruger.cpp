#include "../headers/Forbruger.h"

Forbruger::Forbruger() {}
Forbruger::~Forbruger() {}

Forbruger::Forbruger(std::string _navn, int _maalerNr, int _maalerMax) {
    navn = _navn;
    maalerNr = _maalerNr;
    maalerMax = _maalerMax;

}

void Forbruger::aflaesMaaler(int aflaest) {
    glAflaesning = nyAflaesning;
    nyAflaesning = aflaest;

    return;
}

int Forbruger::beregnForbrug() {
    int forbrug = 0;
    
    if (nyAflaesning < glAflaesning) {
        forbrug = (maalerMax - glAflaesning) + nyAflaesning;

    } else {
        forbrug = nyAflaesning - glAflaesning;

    }

    return forbrug;
}

void Forbruger::setNavn(std::string _navn) {
    navn = _navn;

    return;
}

int Forbruger::getMaalerNr() const {
    return maalerNr;
}

std::string Forbruger::getNavn() const {
    return navn;
}