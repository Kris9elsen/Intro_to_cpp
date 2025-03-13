#ifndef PERSON_H
#define PERSON_H

#pragma once

#include <string>
#include "Dato.h"
#include "Bil.h"

using namespace std;

class Person{
public:
    Person();
    Person(string, string, Dato); // Name, Mail, Birthdate
    ~Person();

    // Setters
    void add_car(Bil);

    // Getters
    string get_name();
    string get_mail();
    Dato get_birthdate();
    Bil get_car();

private:
    string name;
    string mail;
    Dato birthdate;
    Bil car;


};

#endif