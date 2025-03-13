// Lib's
#include <iostream>

// Classes
#include "headers/Dato.h"
#include "headers/Person.h"
#include "headers/Bil.h"

// Namespaces
using namespace std;


// Main loop
int main(){
    Dato dd(202500220);
    cout << "Dags dato er: " << dd.get_date() << "\n";
    cout << "Året er: " << dd.get_year() << "\n";
    cout << "The quater is: " << dd.get_quater() << "\n";
    cout << "Month is: " << dd.get_month() << "\n";
    cout << "Day is: " << dd.get_day() << "\n";
    if (dd.get_leap_year()){
        cout << "Is leap year" << "\n\n";
    } else {
        cout << "Is not leap year" << "\n\n";
    }

    Dato kris_birth(20011210);
    Bil kris_car("AK 47 420", "Volvo", "V90", 2019);
    Person kris("Kristoffer Nielsen", "krnie24@student.sdu.dk", kris_birth);

    cout << kris.get_name() << " er født i: " << kris.get_birthdate().get_year() << "\n";
    cout << kris.get_name() << " mail er: " << kris.get_mail() << "\n\n";

    kris.add_car(kris_car);

    cout << "Reg nr. " << kris.get_car().get_reg() << "\n";
    cout << "Make and model: " << kris.get_car().get_make() << " " << kris.get_car().get_model() << "\n";
    cout << "Year is: " << kris.get_car().get_year() << endl;
}
