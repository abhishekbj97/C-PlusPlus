#include<iostream>
using namespace std;
int main(){
    int number, sum=0;
    while(1) {

        cout << "Enter Number: ";
        cin >>number;

        if (number < 0){
            continue;
        }

        if (number == 0) {
            break;
        }
        sum = sum + number;
        }
        cout << sum <<endl;
        return 0;
}