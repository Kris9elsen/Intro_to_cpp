#include "headers/Bil.h"

Bil::Bil(){}
Bil::~Bil(){}

// Constructor
Bil::Bil(Person o, string r, string ma, string mo){
    owner = o;
    reg = r;
    make = ma;
    model = mo;
}

// Getters
// Get owner
Person Bil::get_owner(){
    return owner;
}

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