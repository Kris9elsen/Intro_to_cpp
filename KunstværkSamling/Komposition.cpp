
#include "Komposition.h"

Komposition::Komposition() {}

Komposition::Komposition(string enTitel, int etAarstal, string enGenre, int enSpilletid) : Kunstvaerk(enTitel, etAarstal)
{
    genre = enGenre;
    spilletid = enSpilletid;
}

int Komposition::getOM() const
{
    return person;
}

Komposition::~Komposition() {}