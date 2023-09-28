// Create a program to find the factorial of an integer entered by the user.

// The factorial of a positive integer n is equal to

// 1 * 2 * 3 * ... * n
// For example, the factorial of 4 is 1 * 2 * 3 * 4, which is 24.

// Take an integer input from the user and assign it to the variable n. We will assume the user will always enter a positive integer.
// Using a while loop, compute the factorial.
// Print the factorial at the end.
// Hint: This problem is similar to the sum of natural numbers problem we recently solved. See the code outline for more hints.

// Example
// Test Input
// 4
// Expected Output
// 24

#include<iostream>
using namespace std;
int main(){
    int number, i=1, total=1;
    cout << "Enter a Number: ";
    cin >> number;

    while (i <= number) {
        total = total * i;
        i++;
    }
    cout << total << endl;
    return 0;
}