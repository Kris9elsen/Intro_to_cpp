
#ifndef BOG_H
#define BOG_H

#include "Kunstvaerk.h"
#include <string>

using namespace std;

class Bog: public Kunstvaerk {
public:
    Bog();
    Bog(string enTitel, int etAarstal, string enGenre, int antalSider);
    int getAntalSider() const;

    ~Bog();
protected:
    string genre;
    int antalSider;
};


#endif
