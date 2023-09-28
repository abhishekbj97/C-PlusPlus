// Check whether a person is an adult or not depending upon his/her age.

// Get integer input from the user and store it in the age variable.
// If age is 18 or above, print The person can vote.
// If not, print The person cannot vote.
// Example
// Test Input

// 17
// Expected Output

// Not Adult

#include<iostream>
using namespace std;
int main(){
    int age;

    cout << "Enter the Age: ";
    cin >> age;

    if (age >= 18) {
        cout << "The person can vote" <<endl;
    }
    else {
        cout << "The person cannot vote" << endl;
    }
    return 0;
}