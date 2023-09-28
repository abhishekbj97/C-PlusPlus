// Create a program to find the smaller number among two numbers.

// Get two integer inputs for variables number1 and number2.
// Check if number1 is smaller than number2.
// If true, print number1. Otherwise, print number2.

// Example
// Test Input
// 4
// 5

// Expected Output
// 4

#include<iostream>
using namespace std;
int main(){
    int number1, number2;
    
    cout << "Enter the Number: ";
    cin >> number1 >> number2;

    if (number1 > number2) {
        cout << number1 <<endl;
    } 
    else {
        cout << number2 <<endl;
    }
}