#include "../headers/Hund.hpp"

Hund::Hund() {}
Hund::~Hund() {}
Hund::Hund(const string n, const string t, const string r, int v) :
    Husdyr(n, t), race(r), vaegt(v) {}

string Hund::givLyd() {
    return "VOV!";
}