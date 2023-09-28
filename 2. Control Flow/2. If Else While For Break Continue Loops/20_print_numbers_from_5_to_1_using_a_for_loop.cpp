// Problem Description
// Create a program to print numbers from 5 to 1 using a for loop.

// Initialize a variable i with the value 5.
// Inside the for loop, print the value of i.
// Decrease the value of i by 1 in each iteration of the loop.

// Example
// Expected Output
// 5
// 4
// 3
// 2
// 1

#include<iostream>
using namespace std;
int main(){
    int i = 5;
    for (int i=5; i>=1 ; i--) {
        cout << i <<endl;
    }
    return 0;
}