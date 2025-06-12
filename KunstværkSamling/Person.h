#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person {
public:
    Person();

    Person(string etNavn, string enNationalitet, int etFoedeaar, int etDoedsaar);

    ~Person();
protected:
    string navn;
    string nationalitet;
    int foedeaar;
    int doedsaar;
};

#endif 
