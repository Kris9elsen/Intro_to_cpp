#include "../headers/Array.hpp"

Array::~Array(){}

Array::Array(int _size) {
    size = _size;
}

void Array::invert(int arr[]) {
    int temp;

    for (int i = 0; i < size/2; i++) {
        temp = arr[size-i-1];
        arr[size-i-1] = arr[i];
        arr[i] = temp;
    }
}

int Array::findStoersteTal(int arr[]) {
    int temp = arr[0];

    for (int i = 0; i < size; i++)  if (arr[i] > temp) temp = arr[i];

    return temp;
}

int Array::sum_of_even(int arr[]) {
    int res = 0;
    for (int i = 0; i < size; i++)  if (0 == arr[i]%2) res += arr[i];
    return res;
}

map<int, int> Array::frequence(int arr[]) {
    map<int, int> frequence;

    for (int i = 0; i < size; i++) {
        frequence[arr[i]]++;
    }

    return frequence;
}

bool Array::is_sortet(int arr[]) {
    int temp = arr[0];

    for (int i = 0; i < size; i++) if (arr[i] < temp) return false;

    return true;
}

bool Array::sumAfToTal(int arr[], int x) {
    unordered_map<int, int> comps;


    for (int i = 0; i < size; i++) {
        auto it = comps.find(arr[i]);

        if (it != comps.end()) {
            return true;
        }

        comps[x-arr[i]] = arr[i];
    }

    return false;
}