#include "Distrikt.h"

Distrikt::Distrikt() {}
Distrikt::~Distrikt() {}

Distrikt::Distrikt(int _prisM3) {
    prisM3 = _prisM3;
}

void Distrikt::addForbruger(Forbruger &forbruger) {
    forbrugere.push_back(&forbruger);
    antalForbrugere = forbrugere.size();

    return;
}

int Distrikt::afregnForbruger(int maalerNr) {
    for (int i = 0; i < antalForbrugere; i++) {
        if (forbrugere[i]->getMaalerNr() != maalerNr) continue;

        return forbrugere[i]->beregnForbrug() * prisM3;
    }

    return -1;
}