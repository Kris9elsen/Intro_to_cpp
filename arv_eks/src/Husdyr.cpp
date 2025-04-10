#include "../headers/Husdyr.hpp"

Husdyr::Husdyr() {}
Husdyr::~Husdyr() {}

Husdyr::Husdyr(const string _ejerNavn, const string _telefonnr) {
    ejersNavn = _ejerNavn;
    telefonnr = _telefonnr;
}

string Husdyr::givLyd() {
    return "Ingen lyd";
}

