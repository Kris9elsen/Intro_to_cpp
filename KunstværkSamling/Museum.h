#ifndef MUSEUM_H
#define MUSEUM_H

#include <string>

using namespace std;

class Museum {
public:
    Museum();

    Museum(string etNavn, string enAdresse);
    string getNavn() const;

    ~Museum();
protected:
    string navn;
    string adresse;
};


#endif
