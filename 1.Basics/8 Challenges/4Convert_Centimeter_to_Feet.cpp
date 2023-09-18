// Problem Description
// Create a program to convert a value in centimeters to feet.

// The formula to convert centimeter to feet is

// ft = cm * 0.0328 
// Get a double input from the user and assign it to the centimeter variable.
// Use the above formula to convert the centimeter value to feet.
// Assign the result to the feet variable and print the result.

// Example

// Test Input
// 48.5
// Expected Output
// 1.5908

#include<iostream>
using namespace std;

int main(){
    double centimeter, feet;
    cout << "Enter the Centimenter: ";
    cin >> centimeter;

    feet = centimeter * 0.0328; 
    cout << feet << endl;
    return 0;
}