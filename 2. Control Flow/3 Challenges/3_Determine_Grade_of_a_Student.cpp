#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter Grade: ";
    cin >> marks;

    if (marks >= 90){
        cout<< "A" <<endl;
    }
    else if(marks >= 80){
        cout<< "B" <<endl;
    }
    else if(marks >= 90){
        cout<< "c"<<endl;
    }
    else {
        cout <<"D";
    }
    return 0;
}
// ---------------------------------
// Problem Statement
// Create a program to determine the grade of a student based on the marks they have obtained.

// Get integer input for the variable marks.
// Determine the grade using the if..else statement.
// If marks is greater than or equal to 90, print A.
// If marks is greater than or equal to 80, print B.
// If marks is greater than or equal to 70, print C.
// Otherwise, print D.

// Example
// Test Input
// 75
// Expected Output
// B