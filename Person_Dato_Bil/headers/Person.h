#ifndef PERSON_H
#define PERSON_H

#pragma once

#include <string>
#include "Dato.h"

using namespace std;

class Person{
public:
    Person();
    Person(string, string, Dato); // Name, Mail, Birthdate
    ~Person();

    // Getters
    string get_name();
    string get_mail();
    Dato get_Birthdate();

private:
    string name;
    string mail;
    Dato birthdate;


};

#endif