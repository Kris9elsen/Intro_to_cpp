
#ifndef KUNSTVAERK_H
#define KUNSTVAERK_H

#include "Person.h"
#include <string>
#include <array>

using namespace std;

class Kunstvaerk {
public:
    Kunstvaerk();
    Kunstvaerk(string enTitel, int etAarstal);

    virtual void addOM(Person enPerson);
    virtual string getTitel() const;
    
    virtual ~Kunstvaerk();
protected:
    string titel;
    int aar;
    array<Person*, 5> ophavsMaend;
    int person;
    
};


#endif
