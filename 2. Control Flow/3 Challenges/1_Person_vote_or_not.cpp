#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter Age: ";
    cin >> age;
    if (age >= 18 ){
        cout << "vote" <<endl;
    }
    else
    {
        cout << "Cannot Vote" <<endl;
    }
    return 0;
}
// ------------------------------------------------
// Problem Statement
// Create a program to check if a person can vote or not based on their age.

// Get user input and store it in the int variable age.
// If age is greater than or equal to 18, he/she can vote.
// If the person can vote, print Can Vote. Otherwise, print Cannot Vote.

// Example
// Test Input
// 35

// Expected Output
// Can Vote