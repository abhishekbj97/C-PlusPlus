#include<iostream>
using namespace std;
int main(){
    int age = 25;

    bool result1 = (age == 25);
    cout << result1 <<endl;

    bool result2 = (age == 30);
    cout << result2 <<endl;

    bool result3 = (age != 25);
    cout << result3 <<endl; 

    bool result4 = (age >= 25);
    cout << result4 <<endl;

    bool result5 = (age < 25);
    cout << result5 <<endl;

    return 0;
}