#include<iostream>
using namespace std;
int main(){
    int product;
    for (int i=1; i<=5; i++){
        product =  9 * i ;
        cout << "9 * " << i << " = ";
        cout << product <<endl; 
    }

    return 0;
}

// Print Multiplication Table
// In this example, we will create a multiplication table of a number (let's say 9) up to 5. 
// Here's the output we are looking for.

// 9 * 1 = 9
// 9 * 2 = 18
// 9 * 3 = 27
// 9 * 4 = 36
// 9 * 5 = 45
// To solve this program, we need to iterate a loop five times from 1 to 5. 
// And, in each iteration of the loop, we will compute the product.