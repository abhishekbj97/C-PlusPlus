// Create a program to add variables of different data types.

// Create an integer variable number1 with value 34.
// Create a double variable number2 with value 54.9.
// Add number1 and number2 and assign the result to a double variable result by explicitly converting number1 to double.
// Print result.

// Example
// Expected Output
// 88.9

#include<iostream>
using namespace std;
int main(){
    int number1 = 34;
    double number2 = 54.9;
    double result = double(number1) + number2;
    cout << result;
    return 0;
}