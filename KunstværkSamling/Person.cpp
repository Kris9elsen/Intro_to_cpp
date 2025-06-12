
#include "Person.h"

Person::Person() {}

Person::Person(string etNavn, string enNationalitet, int etFoedeaar, int etDoedsaar)
{
    navn = etNavn;
    nationalitet = enNationalitet;
    foedeaar = etFoedeaar;
    doedsaar = etDoedsaar;
}

Person::~Person() {}