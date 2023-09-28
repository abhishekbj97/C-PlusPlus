// Create a program to print numbers from 5 to 1 using a while loop.

// Create variable i with value 5.
// Inside a while loop, print the value of i.
// Decrease the value of i by 1 in each iteration of the loop.

// Example
// Expected Output:
// 5
// 4
// 3
// 2
// 1

#include<iostream>
using namespace std;
int main(){
    int i=5;
    while(i >= 1){
        cout << i << endl;
        i = i - 1; //i--;
    }
    return 0;
}