#include "Country.h"

Country::Country() {}
Country::~Country() {}

Country::Country(std::string _country) {
    country = _country;
}

std::string Country::getCountry() const {
    return country;
}