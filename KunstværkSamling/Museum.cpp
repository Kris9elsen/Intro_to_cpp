

#include "Museum.h"

Museum::Museum() {}

Museum::Museum(string etNavn, string enAdresse)
{
    navn = etNavn;
    adresse = enAdresse;
}

string Museum::getNavn() const
{
    return navn;
}

Museum::~Museum() {}