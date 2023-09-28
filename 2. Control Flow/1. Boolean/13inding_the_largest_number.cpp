#include<iostream>
using namespace std;
int main (){
    int num1, num2, num3;

    cout << "Enter the Number: ";
    cin >> num1 >> num2 >> num3;

    bool result =  (num1 > num2) && (num1 > num3);
    cout << result <<endl;
    return 0;
}