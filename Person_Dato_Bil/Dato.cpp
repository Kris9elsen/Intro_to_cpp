#include "headers/Dato.h"

using namespace std;

Dato::Dato(){} // Constructor
Dato::~Dato(){} // Destructor

// Constructor
Dato::Dato(int d){
    date = d;
}

// Getters
// Return full date
int Dato::get_Date(){
    return date;
}

// Return year
int Dato::get_Year(){
    return date/10000;
}