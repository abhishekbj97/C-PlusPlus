#include<iostream>
using namespace std;

int main(){
    int x = 9 / 3 + 8 * 4 - 2; //The reason why division is executed first is due to the concept called precedence and associativity.  
    cout << x;                  // BODMAS 
    return 0; 
}