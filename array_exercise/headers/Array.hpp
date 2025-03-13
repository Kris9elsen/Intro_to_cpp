#ifndef ARRAY_H
#define ARRAY_H

#pragma once

#include <map>
#include <unordered_map>

using namespace std;

class Array
{
public:
    Array(int);
    ~Array();

    void invert(int*);
    int findStoersteTal(int*);
    int sum_of_even(int*);
    map<int, int> frequence(int*);
    bool is_sortet(int*);
    bool sumAfToTal(int*, int);


private:
    int size;

};

#endif