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

    // Setters
    void set_date(int); // Set date
    void set_year(int); // Set year
    void set_month(int); // Set month
    void set_day(int); // Set day
    void set_date_plus_one(); // Add one to the date
    void set_date_minus_one(); // Subtract one from the date


    // Getters
    int get_date(); // Get full date
    int get_year(); // Get Year
    int get_quater(); // Get Quarter
    int get_month(); // Get Month
    int get_day(); // Get day
    int get_days_pass(); // Get days passed
    int get_days_left(); // Get days left
    bool get_leap_year(); // Get leap year trure/false
    bool get_is_valid(); // Check if date is valid


private:
    int date; //YYYYMMDD
    
};

#endif