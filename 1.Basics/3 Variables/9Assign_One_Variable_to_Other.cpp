// Problem Description
// Create a program to assign the value of one variable to another.

// Create a variable named distance with value 134.
// Print the distance variable.
// Create another variable named distance2 with value 564.
// Assign the value of distance2 to the distance variable.
// Print the distance variable again in the new line.
// Example
// Expected Output

// 134
// 564

#include<iostream>
using namespace std;
int main(){
    int distance = 134;
    cout << distance <<endl;
    int distance2 = 564;
    distance = distance2;
    cout << distance;
    return 0;
}