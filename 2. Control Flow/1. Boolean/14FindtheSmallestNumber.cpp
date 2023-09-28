// Create a program to check the smallest number.

// Take three integer inputs from the user and store them in n1, n2, and n3 respectively.
// If n2 is the smallest number, print 1.
// If n2 is not the smallest number, print 0.

#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout << "Enter the 3 Number: ";
    cin >> num1 >> num2 >> num3;

    bool  result = (num1 > num2) && (num3 > num2);
    cout << result <<endl;
}