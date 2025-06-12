
#include "Bog.h"

Bog::Bog() {}

Bog::Bog(string enTitel, int etAarstal, string enGenre, int sidetal)
: Kunstvaerk(enTitel, etAarstal){
    genre = enGenre;
    antalSider = sidetal;
 }

int Bog::getAntalSider() const
{
    return antalSider;
}

Bog::~Bog() {}