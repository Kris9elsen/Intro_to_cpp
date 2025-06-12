
#include "Maleri.h"

Maleri::Maleri() {}

Maleri::Maleri(string enTitel, int etAarstal, int enLaengde, int enBredde, Museum etMuseum) : Kunstvaerk(enTitel, etAarstal)
{
    laengde = enLaengde;
    bredde = enBredde;
    museum = etMuseum;
}

Museum Maleri::getMuseum() const
{
    return museum;
}

Maleri::~Maleri() {}