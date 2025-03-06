#include "../headers/CprNr.h"
#include <iostream>

using namespace std;

int main() {
    CprNr cpr = CprNr("1012016354");

    cout << "Is valid: " << cpr.isValid() << "\n";
    cout << "Is mand: " << cpr.erMand() << "\n";
    cout << "Is kvinde: " << cpr.erKvinde() << "\n";
    cout << "Age is: " << cpr.getAlder() << "\n";
    cout << "Date is: " << cpr.getDato() << "\n";
    cout << "Year is: " << cpr.getAar() << "\n";
    cout << "Month is: " << cpr.getMaaned() << "\n";
    cout << "day is: " << cpr.getDag() << "\n";
    string input;
    cout << "Enter new cprNr: ";
    cin >> input;
    cpr.setCprNr(input);
    cout << "New cprNr is: " << cpr.getCprNr() << endl;

    return 0;
}