//    int num1=11, num2=4;
//    cout << num1 / num2 << endl;
//    cout << num1 % num2 << endl;


#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a Number: " ;
    cin >> number;

    cout << (number % 2 == 0) <<endl;

    return 0;
}