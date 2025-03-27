#include "../headers/Dato.h"

using namespace std;

Dato::Dato(){} // Constructor
Dato::~Dato(){} // Destructor

// Constructor
Dato::Dato(int d){
    date = d;
}

// Setters
// Set full date
void Dato::set_date(int d){
    date = d;
}

// Set year
void Dato::set_year(int y){
    date = (y * 10000) + (date % 10000);
}

// Set month
void Dato::set_month(int m){
    date = (date / 10000) * 10000 + (m * 100) + (date % 100);
}

// Set day
void Dato::set_day(int d){
    date = (date / 100) * 100 + d;
}

// Add one day
void Dato::set_date_plus_one(){
    // Get year, month, day
    int year = get_year();
    int month = get_month();
    int day = get_day();

    // Days in each month
    int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check for leap year
    if (month == 2 && get_leap_year()) {
        days_in_month[2] = 29;
    }

    // Increment day
    day++;

    // Check for month roll over
    if (day > days_in_month[month]){
        day = 1;
        month++;
    }

    // Check for month roll over
    if (month > 12){
        month = 1;
        year++;
    }

    // Set date
    date = (year * 10000) + (month * 100) + day;
}

// Subtract one day
void Dato::set_date_minus_one(){
    // Get year, month, day
    int year = get_year();
    int month = get_month();
    int day = get_day();

    // Days in each month
    int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check for leap year
    if (month == 3 && get_leap_year()) {
        days_in_month[2] = 29;
    }

    // Decrement day
    day--;

    // Check for month roll over
    if (day < 1) {
        month--;

        // Check for year roll over
        if (month < 1) {
            month = 12;
            year--;
        }

        // Set day to last day of the new month
        day = days_in_month[month];
    }

    // Set date
    date = (year * 10000) + (month * 100) + day;
}

// Getters
// Return full date
int Dato::get_date(){
    return date;
}

// Return year
int Dato::get_year(){
    return date/10000;
}

// Return quater
int Dato::get_quater(){
    return (get_month() - 1) / 3 + 1;
}

// Return month
int Dato::get_month(){
    return (date % 10000) / 100;
}

// Return day
int Dato::get_day(){
    return date % 100;
}

bool Dato::get_leap_year(){
    int y = get_year();
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

bool Dato::get_is_valid(){
    if (date < 17000301) return false;

    // Get year
    int year = get_year();

    // Year range check
    if (year < 1700 || year > 9999) return false;

    // Get month
    int month = get_month();

    // Month range check
    if (month < 1 || month > 12) return false;

    // get day
    int day = get_day();

    // Days in each month
    int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check for leap year
    if (month = 2 && get_leap_year()) days_in_month[2] = 29;

    if (day < 1 || day > days_in_month[month]) return false;

    return true;
}

int Dato::get_days_pass(){
    // Get year, month, day
    int year = get_year();
    int month = get_month();
    int day = get_day();

    // Days in each month
    int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // check for lrap year
    if (get_leap_year()) days_in_month[2] = 29;

    int days_pass = day;
    for (int i = 1; i < month; i++){
        days_pass += days_in_month[i];
    }

    // Return result
    return days_pass;
}

int Dato::get_days_left(){
    // Get year, month, day
    int year = get_year();
    int month = get_month();
    int day = get_day();

    // Days in each month
    int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (get_leap_year()){
        days_in_month[2] = 29;
    }

    // Get days left in current month
    int days_left = days_in_month[month] - day;

    // get days left
    for (int i = month + 1; i <= 12; i++){
        days_left += days_in_month[i];
    }

    // Return days
    return days_left;
}
