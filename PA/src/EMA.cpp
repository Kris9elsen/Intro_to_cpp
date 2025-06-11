#include "../headers/EMA.hpp"

EMA::EMA() {}

EMA::EMA(string ema) {
    emailAddress = ema;
}

EMA::~EMA(){}

bool EMA::isValid() const {
    if (snabelA() == -1) return false;
    if (!dot()) return false;
    if (!checkLengths()) return false;
    if (!checkChars()) return false;

    return true;
}

// Private

// Check for '@' and index
int EMA::snabelA() const {
    int aPos = {};
    int total = 0;

    for (u_long i = 0; i < emailAddress.length(); i++) {
        if (emailAddress[i] == '@') {
            aPos = i;
            total++;
        }
    }

    if (aPos < 5) return -1;
    if (aPos > 64) return -1;
    if (total != 1) return -1;

    return aPos;
}


// Check for '.' and index
bool EMA::dot() const {
    int dPos;
    int total = 0;
    int aPos = snabelA();

    for (u_long i = 0; i < emailAddress.length(); i++) {
        if (emailAddress[i] == '.') {
            dPos = i;
            total++;
        }
    }

    if (total != 1) return false;
    if (dPos - aPos < 3) return false;

    return true;
} 

// Check for lengths
bool EMA::checkLengths() const {
    int aPos = snabelA();
    int first = emailAddress.substr(aPos).length();
    int last = emailAddress.substr(aPos+1, emailAddress.length()).length();

    if (first < 5 || first > 64) return false;
    if (last < 5 || last > 255) return false;

    return true;
}

// Check for chars
bool EMA::checkChars() const {
    for (u_long i = 0; i < emailAddress.length(); i++) {
        char check = emailAddress[i];
        if (check > 'a'-1 && check < 'z'+1) continue;
        if (check > 'A'-1 && check < 'Z'+1) continue;
        if (check > '0'-1 && check < '9'+1) continue;
        if (check == '.' || check == '@' || check == '%' || check == '&') continue;
        return false;
    }

    return true;
}

// Get Set

// Get email
string EMA::getEMA() {
    return emailAddress;
}

// set email
void EMA::setEMA(string ema) {
    emailAddress = ema;
}