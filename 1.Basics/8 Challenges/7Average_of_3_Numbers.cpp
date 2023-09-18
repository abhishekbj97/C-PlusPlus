// Create a program to find the average of 3 numbers.

// The average of 3 numbers a, b, and c are given by:

// average = (a + b + c) / 3
// Create three double variables number1, number2, and number3.
// Get input of the three variables in a single statement using cin.
// Print the average of the three variables directly (without storing the average in a variable).
// Example
// Test Input

// 5.5
// 86.925
// 0.56
// Expected Output

// 30.995

#include<iostream>
using namespace std;

int main(){
    double number1, number2, number3;
    cout << "Enter 3 numbers: ";
    cin >> number1 >> number2 >> number3;
    double(average) = (number1 + number2 + number3)/3;
    cout << average << endl;
    return 0;
}