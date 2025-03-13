#include <iostream>
#include "../headers/Array.hpp"

using namespace std;

int main() {
    int arr[] = {10, 10, 123, 123, 1238849, 1271, 127301, 18782, 1728932, 65473, 373, 2, 3, 65, 90, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    Array array(size);

    int large = array.findStoersteTal(arr);

    cout << "largest number is: " << large << endl;

    array.invert(arr);

    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    int sum = array.sum_of_even(arr);
    cout << "Sum of all even: " << sum << endl;

    map<int, int> times = array.frequence(arr);
    for (const auto& pair : times)  cout << pair.first << " -> " << pair.second << endl;

    cout << "Is sortet: " << array.is_sortet(arr) << endl;

    cout << array.sumAfToTal(arr, 10);


    return 0;
}

