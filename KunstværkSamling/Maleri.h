#ifndef MALERI_H
#define MALERI_H

#include "Kunstvaerk.h"
#include "Museum.h"

using namespace std;

class Maleri: public Kunstvaerk {
public:
    Maleri();

    Maleri(string enTitel, int etAarstal, int enLaengde, int enBredde, Museum etMuseum);
    Museum getMuseum() const;

    ~Maleri();
protected:
    int laengde;
    int bredde;
    Museum museum;
};


#endif
