// Create a program to divide N number of chocolates among M children.

// Get an integer value for the number of chocolates.
// Get an integer input for the number of children.
// Find the number of chocolates each child gets after division and print it.
// Find the number of remaining chocolates and print it.
// Assumption:

// Input value for the number of chocolates should be greater than the number of children.

// Example
// Test Input
// 140
// 12

// Expected Output
// 11
// 8

#include<iostream>
using namespace std;
int main(){
    int chocolates, children;
    cout << "Enter the number of Chololates: ";
    cin >> chocolates;
    cout << "Enter the number of children: ";
    cin >> children;
    double(share) =  chocolates/children;
    double(remaining_chocolates) = chocolates % children;
    
    cout << share <<endl;
    cout << remaining_chocolates <<endl;
    return 0;
}