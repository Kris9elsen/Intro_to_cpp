#include "../headers/Stak.hpp"
#include "../headers/Bil.h"
#include <iostream>

using namespace std;

int main() {
    Bil knuds("MA23645", "Volvo", "V60", 2019);
    Bil peters("MA27645", "Volvo", "V60", 2019);
    Bil povls("MA30645", "Volvo", "V60", 2019);

    Stak<Bil> stak("Biler");

    stak.push(knuds);
    stak.push(peters);
    stak.push(povls);

    cout << stak.getNavn() << endl;
    cout << stak.getStackSize() << endl;
    cout << stak.isEmpty() << endl;
    cout << stak.pop().get_reg() << endl;
    cout << stak.pop().get_reg() << endl;
    cout << stak.pop().get_reg() << endl;
    cout << stak.isEmpty() << endl;
}