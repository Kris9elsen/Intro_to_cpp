#include "../headers/EAN.h"

EAN::EAN() {}
EAN::~EAN() {}

EAN::EAN(string _eanNr) {
    eanNr = _eanNr;
}

bool EAN::isValid() {
    int size = eanNr.size();
    if (size != eanSize) return false;

    vector<int> even = {eanNr[0]};
    vector<int> odd;

    for (int i = 1; i < size; i+=2) {
        even.push_back(eanNr[i-1]);
        odd.push_back(eanNr[i]);
    }

    int result = accumulate(odd.begin(), odd.end(), 0);
    result *= 3;
    result += accumulate(even.begin(), even.end(), 0);

    return result % 10 == 0;
}