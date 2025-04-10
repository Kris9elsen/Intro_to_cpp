#include "../headers/Husdyr.hpp"
#include "../headers/Hund.hpp"
#include "../headers/Kat.hpp"
#include "../headers/Kanin.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <limits>

int main() {
    std::vector<Husdyr*> husdyrListe;
    husdyrListe.push_back(new Hund("Peter", "12345678", "Labrador", 30));
    husdyrListe.push_back(new Kat("Anna", "87654321", "Han", true));
    husdyrListe.push_back(new Kanin("Mette", "11223344", "Hvid", 2));
    husdyrListe.push_back(new Hund("Hans", "22334455", "Schæfer", 40));
    husdyrListe.push_back(new Kat("Kirsten", "33445566", "Han", true));
    husdyrListe.push_back(new Kanin("Lars", "44556677", "Brun", 3));
    husdyrListe.push_back(new Hund("Søren", "55667788", "Golden Retriever", 35));
    husdyrListe.push_back(new Kat("Marie", "66778899", "Hun", false));
    husdyrListe.push_back(new Kanin("Jens", "77889900", "Grå", 4));
    husdyrListe.push_back(new Hund("Lone", "88990011", "Bulldog", 25));
    husdyrListe.push_back(new Kat("Niels", "99001122", "Hun", false));
    husdyrListe.push_back(new Kanin("Pia", "10111213", "Sort", 5));
    husdyrListe.push_back(new Hund("Kurt", "12131415", "Beagle", 20));
    husdyrListe.push_back(new Kat("Bente", "13141516", "Han", true));
    husdyrListe.push_back(new Kanin("Henrik", "14151617", "Hvid", 6));
    husdyrListe.push_back(new Hund("Gitte", "15161718", "Dachshund", 15));

    for (const auto& husdyr : husdyrListe) {
        std::cout << husdyr->givLyd() << std::endl;
    }
    for (const auto& husdyr : husdyrListe) {
        delete husdyr; // Clean up memory
    }
    husdyrListe.clear(); // Clear the vector
    std::cout << "Husdyr liste er ryddet op." << std::endl;
    std::cout << "Tryk på en tast for at afslutte." << std::endl;
    std::cin.get(); // Wait for user input

    return 0;
}