// Problem Description
// Create a program to calculate profit/loss amount.

// Suppose the cost price of a book is 19 dollars. Store it in a variable named cost_price.
// The selling price of the book is 27 dollars. Store it in a variable named selling_price.
// Calculate the profit amount on the book.
// Example

// Expected Output
// 8

#include<iostream>
using namespace std;
int main(){
    int cost_price = 19, selling_price = 27;
    cout << selling_price - cost_price;
    return 0;
}