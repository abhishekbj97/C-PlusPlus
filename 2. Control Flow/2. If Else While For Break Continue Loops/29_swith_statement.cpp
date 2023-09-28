#include<iostream>
using namespace std;
int main(){
    int number;
    cout <<"Enter a Number: ";
    cin >> number;
    switch(number){
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        cout<< "Odd Number" <<endl;
        break;

        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
        cout<< "Even Number" <<endl;
        break;

        default:
        cout<<"Invalid Number out of range"<<endl;
    }
}

// Create a program to identify even and odd numbers between 1 and 10.

// Take an integer input between 1 and 10 and store it in a number variable.
// Use a switch statement to check if number is even or odd.
// If number is not between 1 to 10, print Invalid Number.
// Hint: Use odd numbers cases (1, 3, 5, 7, 9) to print Odd Number and use even numbers cases (2, 4, 6, 8, 10) to print Even Number.

// Example:
// Test Input
// 3
// Expected Output
// Odd Number