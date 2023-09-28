// Create a program to check if the user is an adult.

// Get integer input from the user and store it in the age variable.
// If age is 18 or above, print The person can vote.
// If not, don't print anything.

// Example
// Test Input
// 19

// Expected Output
// The person can vote

#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter the AGE:  ";
    cin >> age ;

    if (age >= 18) {
        cout << "Person can Vote" <<endl;
    }
    cout <<"Person can't vote" <<endl;
    return 0;
}