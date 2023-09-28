// Create a program to add numbers until the user enters 0.

// Create integer variables sum and number.
// Assign the value 0 to sum.
// Use a do...while loop that loops until number is 0.
// Inside the loop, get input for number and add it to sum.
// Print the value of sum outside the loop.
// Example
// Test Input

// 5
// 9
// 0
// Expected Output

// 14

#include<iostream>
using namespace std;
int main(){

    int num, sum = 0;
    do{
        cout << "enter the number: ";
        cin >> num;
        sum = sum + num;
    } while(num!=0);
    cout << sum <<endl; 
    return 0;
}

