#include "headers/Bil.h"

Bil::Bil(){}
Bil::~Bil(){}

// Constructor
Bil::Bil(string r, string ma, string mo, int y){
    reg = r;
    make = ma;
    model = mo;
    year = y;
}

// Getters
// Get reg
string Bil::get_reg(){
    return reg;
}

// Get make
string Bil::get_make(){
    return make;
}

// Get model
string Bil::get_model(){
    return model;
}

// Get year
int Bil::get_year(){
    return year;
}