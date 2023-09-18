// Problem Description
// Create a program to divide N apples to M number of students.

// Suppose you have to divide 14 apples among 3 students equally.

// How many apples will each student get if apples must be divided equally?

// And how many apples will be left that cannot be divided?

// Task

// Create an int variable named apple_number and assign 14 to it.
// Create another int variable named student_number and assign 3 to it.
// Compute the number of apples each student will get and print it.
// Compute the number of apples that will be left and print it.
// Example
// Expected Output

// 4
// 2

#include<iostream>
using namespace std;
int main(){
    int apple_number = 14;
    int student_number = 3;
    int div_each_student_apple = apple_number / student_number;
    cout << div_each_student_apple <<"\n" ;
    
    int apple_left_num = apple_number % student_number;
    cout << apple_left_num;
    return 0;
}