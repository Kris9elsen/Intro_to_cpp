#ifndef KAT_H
#define KAT_H

#pragma once

#include "Husdyr.hpp"
#include <string>

class Kat: public Husdyr {
public:
    Kat();
    ~Kat();
    Kat(const string, const string, const string, bool);
    string givLyd() override;

protected:
    string koen;
    bool steriliseret;

};

#endif