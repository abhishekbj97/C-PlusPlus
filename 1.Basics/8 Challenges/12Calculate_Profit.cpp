// Create a program to calculate the profit given the cost price and selling price.

// Get double input for variables cost_price and selling_price.
// Find the profit amount by subtracting cost price from the selling price.
// Use formula: (profit / cost_price) * 100 to find the profit percent.
// Print both the profit and profit percent.
// Assumption

// The input value for selling price should be greater than the input value for cost price

// Example

// Test Input
// 1500
// 1799

// Expected Output
// 299
// 19.9333

#include<iostream>
using namespace std;
int main(){
    double cost_price, selling_price, profit, profit_percent;
    cout << "Enter the cost_price and selling_price: ";
    cin >> cost_price >> selling_price;
    profit = selling_price - cost_price;
    profit_percent = (profit/cost_price)*100;
    cout << profit << endl << profit_percent << endl;
    return 0;
}