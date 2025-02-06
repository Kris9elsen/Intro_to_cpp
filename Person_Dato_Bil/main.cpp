#include <iostream>
#include "headers/Dato.h"
#include "headers/Person.h"
#include "headers/Bil.h"

using namespace std;

int main(){
    Dato dd(20250206);
    cout << "Dags dato er: " << dd.get_Date() << endl;
    cout << "Året er: " << dd.get_Year() << endl;

    Dato krisBirth(20011210);
    Person kris("Kristoffer Nielsen", "krnie24@student.sdu.dk", krisBirth);

    cout << kris.get_name() << " er født i: " << kris.get_Birthdate().get_Year() << endl;
    cout << kris.get_name() << " mail er: " << kris.get_mail() << endl;

    Bil krisCar(kris, "AK 47 420", "Volvo", "V90");

    cout << krisCar.get_reg() << " Er ejet af: " << krisCar.get_owner().get_name() << " og er en: " << krisCar.get_make() << " " << krisCar.get_model() << endl;
}
