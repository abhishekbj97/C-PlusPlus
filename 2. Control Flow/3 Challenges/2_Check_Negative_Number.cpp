#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a Number: ";
    cin >> number;

    if (number < 0){
        cout << "Negative Number" <<endl;
    }
    else if(number > 0){
        cout << "Positive Number" <<endl;
    }
    else {
        cout << "Zero" <<endl;
    }
    return 0;
}

// ---------------------------------
// Problem Description
// Create a program to check if a number is negative or not.

// Get input value for a variable number.
// Check if the number is either less than 0, greater than 0, or equal to 0.
// If the number is less than 0, print Negative Number.
// If the number is greater than 0, print Positive Number.
// Otherwise, print Zero Number.
// Example
// Test Input

// -32
// Expected Output

// Negative Number