#include <iostream>
#include "../headers/Stak.hpp"
#include "../headers/Dato.h"
#include "../headers/Person.h"

using namespace std;

int main() {
    Person peter("Peter Hansen", "email@gmail.com", Dato(19521230));
    Person ole("Ole Dolriis", "email@student.sdu.dk", Dato(19231015));
    Person maia("Maia Roberts", "email@hotmail.dk", Dato(20040428));

    Stak stak("Min stak");

    stak.push(peter);
    stak.push(ole);
    stak.push(maia);

    Person person = stak.pop();
    cout << person.get_name() << " er blevet fjernet fra stakken." << endl;
    person = stak.pop();
    cout << person.get_name() << " er blevet fjernet fra stakken." << endl;
    person = stak.pop();
    cout << person.get_name() << " er blevet fjernet fra stakken." << endl;
}