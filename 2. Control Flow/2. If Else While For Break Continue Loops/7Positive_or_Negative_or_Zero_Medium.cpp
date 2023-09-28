// Create a program to check whether a number is positive or negative or zero.

// Get integer input from the user and store it in the number variable.
// If number is positive, print positive.
// If number is negative, print negative.
// If number is 0, print zero.

// Example
// Test Input
// -53

// Expected Output
// negative

#include<iostream>
using namespace std;
int main (){
    int number;
    cout << "enter a number: ";
    cin >> number;

    if (number > 0){
        cout <<"Positive" <<endl;
    }

    else if (number < 0){
        cout<<"Negative" << endl;
    }

    else {
        cout<< "zero" << endl;
    }

    return 0;
}