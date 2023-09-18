// Problem Description
// Convert distance in miles to kilometers using the formula:

// kilometer = mile * 1.609344
// Create double variables km and mile.
// Get distance in Miles from the user and assign it to mile.
// Convert it to Kilometers using the above formula and assign it to km.
// Print the result.

// Example
// Test Input
// 11.856

// Expected Output
// 19.0804

#include<iostream>
using namespace std;

int main(){
    double km, mile, kilometer;
    
    cout << "Enter the mile: ";
    cin >> mile;

    kilometer = mile * 1.609344;
    cout << "Distance in Mile is: " << kilometer;
    return 0;
}