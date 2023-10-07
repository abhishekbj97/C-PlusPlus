#include<iostream>
using namespace std;

int main(){

    int number, result;
    cout<<"Enter Number: ";
    cin>> number;

    for (int i=1; i<=5; i++){
        result = number*i;
        cout << result <<endl;
    }
    return 0;
}

// Problem Description
// Create a program to print the multiplication table of a number.

// Get an integer input and assign it to variable number.
// Create a for loop that iterates from i = 1 to i = 5.
// Inside the loop, print number * i.

// Example
// Test Input
// 14

// Expected Output
// 14
// 28
// 42
// 56
// 70