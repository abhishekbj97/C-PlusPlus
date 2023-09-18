// Problem Description
// Create a program to find the area of a rectangle.

// The formula to compute the area and perimeter of a rectangle are

// Area = length * breadth
// Perimeter = 2 * (length + breadth)
// Take two integer inputs from the user and store them in length and breadth variables respectively.
// Use the above formula to compute the area and perimeter of the rectangle.
// Example
// Test Input

// 12
// 8
// Expected Output

// 96
// 40

#include<iostream>
using namespace std;
int main(){
    double length, breadth, perimeter, Area;
    cout << "Enter the length and breadth: ";
    cin >> length >> breadth;

    Area = length * breadth;
    perimeter = 2 * (length + breadth);
    
    cout << Area << "\n" << perimeter <<endl;
    return 0;
}