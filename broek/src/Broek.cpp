#include "Broek.h"

Broek::Broek() : taeller(0), naevner(1) {}
Broek::~Broek() {}

Broek::Broek(int aN, int aD) {
    if (aD == 0) throw std::invalid_argument("Naevner must be different from 0");

    taeller = aN;
    naevner = aD;
}

Broek Broek::adder(Broek aF) {
    int nyTaeller = taeller * aF.naevner + aF.taeller * naevner;
    int nyNaevner = naevner * aF.naevner;

    return Broek(nyTaeller, nyNaevner);
}

Broek Broek::subtraher(Broek aF) {
    int nyTaeller = taeller * aF.naevner - aF.taeller * naevner;
    int nyNaevner = naevner * aF.naevner;

    return Broek(nyTaeller, nyNaevner);
}

Broek Broek::multiplicer(Broek aF) {
    return Broek(taeller * aF.taeller, naevner * aF.naevner);
}

Broek Broek::divider(Broek aF) {
    if (taeller == 0) {
        throw std::invalid_argument("Division by 0 not allowed");
    }

    return Broek(taeller * aF.naevner, naevner * aF.taeller);
}

Broek Broek::operator+(Broek b) {
    return adder(b);
}

Broek Broek::operator-(Broek b) {
    return subtraher(b);
}

Broek Broek::operator*(Broek b) {
    return multiplicer(b);
}

Broek Broek::operator/(Broek b) {
    return divider(b);
}

int Broek::getTaeller() const {
    return taeller;
}

int Broek::getNaevner() const {
    return naevner;
}