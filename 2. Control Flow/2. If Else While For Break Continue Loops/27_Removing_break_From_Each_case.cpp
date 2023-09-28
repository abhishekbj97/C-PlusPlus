#include <iostream>
using namespace std;
int main(){
    int month;
    cout << "Enter a Number 1 to 12 for MONTH: ";
    cin >> month;

    switch(month){
        
        case 1:
        cout << "January" <<endl;

        case 2:
        cout << "February" <<endl;

        case 3:
        cout << "March " <<endl;

        case 4:
        cout << "April" <<endl;

        case 5:
        cout << "May " <<endl;

        case 6:
        cout << "June " <<endl;

        case 7:
        cout << "July " <<endl;

        case 8:
        cout << "August " <<endl;

        case 9:
        cout << "September" <<endl;

        case 10:
        cout << "October " <<endl;

        case 11:
        cout << "November " <<endl;

        case 12:
        cout << "December " <<endl;

        default :
        cout << "Invalid Number" <<endl;
    }

    return 0;
}

// switch Statement
// Easy
// Problem Description
// Create a program to find the name of the month.

// Get an integer value between 1 to 12 and store it in a month variable.
// Use a switch case statement to print the month name based on the input.
// If input is 1, print January, if input is 8, print August, and so on.
// Example
// Test Input

// 2
// Expected Output

// February