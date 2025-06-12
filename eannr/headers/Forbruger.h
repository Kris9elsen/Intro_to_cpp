#ifndef FORBRUGER_H
#define FORBRUGER_H

#pragma once

#include <string>

class Forbruger {
public:
    Forbruger();
    ~Forbruger();
    Forbruger(std::string, int, int);

    void aflaesMaaler(int);
    int beregnForbrug();

    void setNavn(std::string);

    int getMaalerNr() const;
    std::string getNavn() const;

private:
    std::string navn;
    int maalerNr;
    int nyAflaesning;
    int glAflaesning;
    int maalerMax;

};

#endif