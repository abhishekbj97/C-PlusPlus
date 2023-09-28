#include<iostream>
using namespace std;
int main(){
    int number;

    while(1){

        cout << "Enter Number: ";
        cin >> number;

        if(number > 0 && number <= 100){
            cout << number <<endl;
            continue;
        }
        if(number < 0 && number < 100 ){
            break;
        }
       
    }
    return 0;
}

// Create a program to continuously ask for integer input from the user using an infinite while loop.

// If the number is between 1 and 100, print the number.
// However, if the number is outside of this range, terminate the loop.
// Example
// Test Input
// 3
// 88
// 23
// -5
// Expected Output
// 3
// 88
// 23