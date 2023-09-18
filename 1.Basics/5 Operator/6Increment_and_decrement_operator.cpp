// The ++ (increment) operator increases the value of a variable by 1. Similarly, the -- (decrement) operator 
// decreases the value of a variable by 1.

// ++number1 is equivalent to number1 = number1 + 1
// --number2 is equivalent to number2 = number2 - 1

#include<iostream>
using namespace std;

int main(){
    int num1 = 10, num2 = 20;
    num1++;  //---------------> num1++ is equivalent to num1 = num1 + 1
    cout<< num1 <<endl;
    num2--;  //---------------> num2-- is equivalent to num2 = num2 - 1
    cout << num2;
}