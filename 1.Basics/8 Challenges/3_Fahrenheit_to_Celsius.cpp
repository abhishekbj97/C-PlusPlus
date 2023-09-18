// Problem Description
// Create a program to convert temperature in Fahrenheit to Celsius using the formula:

// celsius = (fahrenheit - 32) * (5/9)
// Create double variables celsius and fahrenheit.
// Get temperature in Fahrenheit from the user and assign it to fahrenheit.
// Convert it to degree Celsius using the above formula and assign it to celsius.
// Print the result.
// Note: Since celsius is a double variable, use the code (5.0/9.0) instead of (5/9) while calculating its value.

// Example
// Test Input
// 35
// Expected Output
// 1.66667

#include<iostream>
using namespace std;

int main(){
    double celsius, fahrenheit;
    cout << "Enter the Temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * (5.0/9.0);
    cout << celsius <<endl;
    return 0;
}