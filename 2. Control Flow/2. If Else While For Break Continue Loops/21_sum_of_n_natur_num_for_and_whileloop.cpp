#include<iostream>
using namespace std;
int main(){

    // ------------------------------ Using While Loop
    // int num = 1, sum = 0, number;
    
    // cin >> number;
    
    // while(num <= number){
    //     sum = sum + num;
    //     num ++;
    // }
    
    // cout << sum <<endl;

    // -----------------------------Using For Loop
    
    int number, sum = 0;
    cout<< "Enter Number: ";
    cin >> number;

    for(int i=1; i<=number; i++){
        sum = sum + i;
    }
    cout << sum << 
    endl;
}