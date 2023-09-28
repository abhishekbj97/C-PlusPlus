#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a Number: " ;
    cin >> number;
    for (int i=1; i<=number; i++) {
        cout << number;
        if (i == 3) {
            break;
        }
    }
    return 0;
}