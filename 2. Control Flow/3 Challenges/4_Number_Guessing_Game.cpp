#include<iostream>
using namespace std;
int main(){
    int correct_number = 18, guessed_number;
    cout << "Enter Number b/w 1 to 100: ";
    cin  >> guessed_number;

    if (guessed_number == correct_number){
        cout << "Your Guess is Correct" <<endl;
    }
    else if(guessed_number > correct_number){
        cout << "Wrong, your guess is larger" <<endl;
    }
    else {
        cout << "Wrong, your guess is smaller" <<endl;
    }
}

// Problem Description
// Create a program to check if a number guessed by the user is correct or not.

// Create a variable named correct_number with value 18.
// Create another variable named guessed_number.
// Get and input value between 1 to 100 for guessed_number.
// If the guessed number is equal to the correct number, print "Your guess is correct".
// If the guessed number is greater than the correct number, print "Wrong, your guess is larger".
// If the guessed number is smaller than the correct number, print "Wrong, your guess is smaller".

// Example
// Test Input
// 33

// Expected Output
// Wrong, your guess is larger