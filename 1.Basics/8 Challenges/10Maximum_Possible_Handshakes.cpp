// Create a program to find the maximum number of handshakes among N number of students.

// The formula to calculate the combination is

// combination = (n * (n - 1)) / 2
// where n = total number of students
// Get integer input for students variable.
// Use the combination formula to calculate the maximum number of possible handshakes.
// Display the number of possible handshakes.

// Example
// Test Input
// 30

// Expected Output
// 435

#include<iostream>
using namespace std;
int main(){
    int n,combination;
    cout << "Enter the numbe rof students: ";
    cin >> n;
    combination = (n * (n - 1)) / 2;
    cout << combination <<endl;
    return 0;
}