#include<iostream>
using namespace std;

int main(){

    int age1 = 18, age2 = 21;

    cout << (age1 < age2) <<endl;
    cout << (age1 <=age2) <<endl;
    cout << (age2 < age1) <<endl;
    cout << (age2 <= age1) <<endl;
    cout << (age1 < 21) <<endl;
    cout << (age2 < 21) <<endl;

    // with floating point number

    cout << (age1 < 17.9999) <<endl;
    cout << (age2 <= 17.99 ) <<endl;
    return 0;
}