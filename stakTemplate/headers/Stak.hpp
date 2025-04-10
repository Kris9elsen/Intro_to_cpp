#ifndef STAK_H
#define STAK_H

#pragma once

#include <vector>
#include <string>

using namespace std;
template<class T>
class Stak {
public:
    Stak(string n){
        navn = n;
        stakSize = 0;
    }

    string getNavn() const {
        return navn;
    }

    int getStackSize() const {
        return stakSize;
    }

    bool isEmpty() const {
        return data.empty();
    }

    void push(const T& item) {
        data.insert(data.begin(), item);
        stakSize++;
    }

    T pop() {
        T item = data[0];
        data.erase(data.begin());
        stakSize--;
        return item;
    }

private:
    string navn;
    vector<T> data;
    int stakSize;

};

#endif