// Create a program to swap two numbers using addition and subtraction. Do not use a temporary variable.

// Use the following process to swap number1 and number2:

// number1 = number1 + number2
// number2 = number1 - number2
// number1 = number1 - number2

// Create two int variables number1 and number2 and take their input.
// Add number1 and number2 and store the result in number1.
// Subtract number2 from number1 and store the result in number2.
// Then, subtract number2 from number1 again and store the result in number1.
// Print number1 and number2 in separate lines.

// Example
// Test Input
// 7
// 5

// Expected Output
// 5
// 7

#include<iostream>
using namespace std;
int main(){
    int number1, number2;
    cout << "Enter 2 number: "; 
    cin >> number1 >> number2;
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;
    cout << number1 << " " << number2 <<endl;
    return 0;
}