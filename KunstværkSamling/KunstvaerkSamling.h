#ifndef KUNSTVAERKSAMLING_H
#define KUNSTVAERKSAMLING_H

#include <vector>

#include "Kunstvaerk.h"
#include "Komposition.h"
#include "Maleri.h"
#include "Bog.h"

using namespace std;

class KunstvaerkSamling {
public:
    KunstvaerkSamling();

    KunstvaerkSamling(string enSamling);
    void addKunstvaerk(Kunstvaerk &etKunstvaerk);

    void findSangeMedFlereKomponister() const;
    void findMalerierPaaMuseum(string etMuseum) const;

    void beregnAntalLaesteSider() const;

    void printAll() const;

    ~KunstvaerkSamling();
protected:
    vector<Kunstvaerk*> kunstvaerker;
    string samling;
    int antal;
};


#endif
