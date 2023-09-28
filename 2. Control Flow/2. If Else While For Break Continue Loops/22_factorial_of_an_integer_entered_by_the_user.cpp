// Create a program to find the factorial of an integer entered by the user.

// The factorial of a positive integer n is equal to 1 * 2 * 3 * ... * n.

// Factorial of 6 = 1 * 2 * 3 * 4 * 5 * 6
// Take an integer input from the user and assign it to the variable n. We will assume the user will always enter a positive integer.
// Using a for loop, compute the factorial.
// Print the factorial at the end.
// Hint: This problem is similar to the sum of natural numbers problem we recently wrote. See the code outline for more hints.

// Example:
// Test Input
// 4
// Expected Output
// 24
// --------------------------------
#include<iostream>
using namespace std;
int main(){
    int number, fact=1;
    cout << "Enter the number: ";
    cin >> number;
    for(int i=1; i<=number; i++){
        fact = fact * i;
    }
    cout << fact <<endl;
}
