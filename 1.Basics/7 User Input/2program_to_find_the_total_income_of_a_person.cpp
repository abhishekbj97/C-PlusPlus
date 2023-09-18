// Problem Description
// Create a program to find the total income of a person.

// Ask the user to enter the salary and store it in the variable salary.
// Ask the user to enter the bonus and store it in the variable bonus.
// Add salary and bonus and assign the result to the income variable.

// Example
// Test Input
// 3678.58
// 450.8

// Expected Output
// 4129.38

#include<iostream>
using namespace std;

int main(){
    double salary;
    double bonus;
    double income;

    cout << " enter the salary: ";
    cin >> salary ;

    cout << " enter the bonus: ";
    cin >> bonus;

    income = salary + bonus;
    cout << "income is: " << income;
    return 0;
}

