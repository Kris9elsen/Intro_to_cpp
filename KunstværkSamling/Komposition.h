
#ifndef KOMPOSITION_H
#define KOMPOSITION_H

#include "Kunstvaerk.h"
#include <string>

class Komposition: public Kunstvaerk {
public:
    Komposition();

    Komposition(string enTitel, int etAarstal, string enGenre, int enSpilletid);
    int getOM() const;

    ~Komposition();
protected:
    string genre;
    int spilletid;

};


#endif
