// Create a program to calculate the cost price given selling price and profit percentage.

// The formula to calculate the cost price is

// cost_price = (selling_price * 100.0) / (100 + profit_percent)
// Take double inputs for the variables selling_price and profit_percent.
// Use the formula to compute the cost price.
// Print the cost price.

// Example
// Test Input
// 2000
// 5

// Expected Output
// 1904.76

#include<iostream>
using namespace std;
int main(){
    double selling_price, profit_percent, cp;
    cout << "Enter selling price anf profit percent: ";
    cin >> selling_price >> profit_percent;
    cp = (selling_price*100)/(100 + profit_percent);
    cout << cp <<endl;
    return 0;
}