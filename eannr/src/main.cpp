#include "../headers/EAN.h"
#include <iostream>

 using namespace std;
 
int main(){
    EAN e( "9780674062313");
    cout << e.isValid();
} 
