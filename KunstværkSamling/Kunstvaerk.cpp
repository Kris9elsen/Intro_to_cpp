#include "Kunstvaerk.h"

Kunstvaerk::Kunstvaerk()
{
    person = 0;
}

Kunstvaerk::Kunstvaerk(string enTitel, int etAarstal) : Kunstvaerk()
{
    titel = enTitel;
    aar = etAarstal;
}

void Kunstvaerk::addOM(Person enPerson)
{
    ophavsMaend[person++] = &enPerson;
}

string Kunstvaerk::getTitel() const
{
    return titel;
}


Kunstvaerk::~Kunstvaerk() {}