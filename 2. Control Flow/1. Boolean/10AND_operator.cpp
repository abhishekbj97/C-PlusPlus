#include<iostream>
using namespace std;
int main(){
    int age = 21;
    double gpa = 3.5;

    bool result1 = (age > 18 ) && (gpa >= 3.5);
    cout << result1 <<endl;
    
    bool result2 = (age < 20) && (gpa >3.6);
    cout << result2 <<endl;
    return 0;
}