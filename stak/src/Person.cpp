#include "../headers/Person.h"
#include "../headers/Bil.h"

Person::Person(){} // Constructo
Person::~Person(){} // Destructor

// Constructor
Person::Person(string n, string m, Dato b){
    name = n;
    mail = m;
    birthdate = b;
}

// Setters
void Person::add_car(Bil c){
    car = c;
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
Dato Person::get_birthdate(){
    return birthdate;
}

Bil Person::get_car(){
    return car;
}