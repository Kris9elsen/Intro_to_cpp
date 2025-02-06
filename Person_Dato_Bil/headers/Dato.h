#ifndef DATO_H
#define DATO_H

#pragma once

using namespace std;

class Dato
{
public:
    Dato();
    Dato(int); // Date YYYYMMDD
    ~Dato();

    // Getters
    int get_Date();
    int get_Year();

private:
    int date; //YYYYMMDD

};

#endif