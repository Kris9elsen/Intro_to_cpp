#include "../headers/Stak.hpp"

Stak::Stak() {
    stakSize = 0;
    navn = "";
}

Stak::~Stak() {}

Stak::Stak(string n) {
    stakSize = 0;
    navn = n;
}

string Stak::getNavn() const {
    return navn;
}

bool Stak::isEmpty() const {
    return personStak.empty();
}

int Stak::getStakSize() const {
    return stakSize;
}

void Stak::push(Person p) {
    personStak.insert(personStak.begin(), p);
    stakSize++;
}

Person Stak::pop() {
    Person p;
    p = personStak[0];
    personStak.erase(personStak.begin());
    stakSize--;
    return p;
}

Person Stak::getElement(int i) const {
    return personStak.at(i);
}
