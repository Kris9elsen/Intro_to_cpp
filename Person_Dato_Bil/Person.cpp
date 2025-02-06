#include "headers/Person.h"

Person::Person(){} // Constructo
Person::~Person(){} // Destructor

// Constructor
Person::Person(string n, string m, Dato b){
    name = n;
    mail = m;
    birthdate = b;
}

// Getters
// Get name
string Person::get_name(){
    return name;
}

// Get mail
string Person::get_mail(){
    return mail;
}

// Get birthdate
Dato Person::get_Birthdate(){
    return birthdate;
}