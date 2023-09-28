// Create a program to check if the number is divisible by 7.

// Get an integer input from the user.
// Check if the input is divisible by 7 or not. If it's divisible by 7, print 1. If not, print 0.

// Example
// Test Input
// 14

// Expected Output
// 1

#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << (number % 7 == 0) <<endl;
    return 0;
}