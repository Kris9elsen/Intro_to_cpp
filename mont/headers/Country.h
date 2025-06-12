#ifndef COUNTRY_H
#define COUNTRY_H

#pragma once

#include <string>

class Country {
public:
    Country();
    ~Country();
    Country(std::string);

    std::string getCountry() const;

private:
    std::string country;

};

#endif