#include<iostream>
using namespace std;
int main(){
    int number, total = 0;
    cout << "enter the number: " ;
    cin >> number;

    while (number != 0){
        total = total + number;

        // cout << total << endl ; 

        cout << "enter number: ";
        cin >>number;
    }
    cout << "final Total result: " << total <<endl;
    return 0;
}