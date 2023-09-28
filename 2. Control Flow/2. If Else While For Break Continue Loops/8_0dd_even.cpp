// Create a program to check whether a number is even or odd.

// Get integer input from the user and store it in the number variable.
// If number is even, print even.
// If number is odd, print odd.
// Hint: A number is even if number % 2 is equal to 0.

// Example
// Test Input
// 35

// Expected Output
// odd

#include<iostream>
using namespace std;
int main(){
    int number;
    cout <<"enter number: ";
    cin >> number;

    if (number % 2 == 0){
        cout << "Even" <<endl;
    }
    else {
        cout <<"odd" <<endl;
    }
    return 0;
}