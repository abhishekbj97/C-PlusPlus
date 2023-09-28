#include<iostream>
using namespace std;
int main(){
    int age1 = 18;
    int age2 = 21;

    cout << (age1 > 20) <<endl;
    
    cout << (age2 > 20) <<endl;

    cout << (age1 >= 20) <<endl;

    cout << (age1 > age2) <<endl;

    cout << (age2 > age1) <<endl;

    cout << (age2 >= age1) <<endl;
    return 0;
}