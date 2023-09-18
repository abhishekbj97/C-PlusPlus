// Problem Description
// Convert weight in Pounds to Kilograms using the formula:

// kilogram = pound * 0.45359
// Create double variables kg and pounds.
// Get weight in Pounds from the user and assign it to pounds.
// Convert it to Kilograms using the above formula and assign it to kg.
// Print the result.

// Example
// Test Input
// 6.5
// Expected Output
// 2.94834

#include<iostream>
using namespace std;

int main(){
    double kilogram, pounds;
    cout << "Enter the weight in KG: ";
    cin >> pounds;
    kilogram = pounds *0.45359;
    cout << kilogram;
    return 0;
}