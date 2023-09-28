// l find the sum of the first n natural numbers (which will be entered by the user).

// If you do not know, the positive integers starting from 1, 2, 3, 4 ... etc., are called natural numbers. 
// So, the sum of natural numbers will be:

// total = 1 + 2 + 3 + .... + n

#include<iostream>
using namespace std;
int main(){
    int number, total = 0, i = 1;
    cout << "enter the positive number: " << endl ;
    cin >> number;

    while(i <= number){
        total = total + i;
        i++;
    }
    cout << total <<endl;
    return 0;
}