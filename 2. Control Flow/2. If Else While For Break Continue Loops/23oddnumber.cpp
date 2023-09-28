#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter the Number: ";
    cin >> number;
    for(int i=1; i<=number; i++){
        if (i%2 != 0) {
            cout <<i <<endl;
        }
    }
}

// Create a program to print odd numbers between 1 and n (entered by the user).

// Get an integer input from the user. We will assume the user will enter a positive integer.
// Using a loop, iterate from 1 to n (n should be inclusive).
// In each iteration of the loop, print the number if it's an odd number.
// Example
// Test Input

// 8
// Expected Output

// 1
// 3
// 5
// 7