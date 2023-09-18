// Problem Description
// Create a program to take inputs from the user.

// Declare two variables: int number1 and double number2.
// Take integer input and assign it to number1 variable.
// Take double input and assign it to number2 variable.
// Print number1 and number2.
// Example
// Test Input

// 33
// 67.54
// Expected Output

// 33
// 67.54

#include<iostream>
using namespace std;
int main(){
    int number1;
    double number2;
    cin >> number1;
    cin >> number2;
    cout << "Two numbers are: " << number1 << endl << number2;
    return 0;
}