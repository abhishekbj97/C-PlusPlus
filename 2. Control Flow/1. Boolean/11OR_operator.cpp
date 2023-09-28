#include<iostream>
using namespace std;
int main(){
    int age = 22;
    double gpa = 3.5;
 
    bool result1 = (age > 21) || (gpa =3.5);
    cout << result1 <<endl ;
    
    bool result2 = (age > 25) || (gpa = 3.5);
    cout << result2 <<endl;
    
    bool result3 = (age > 25) || (gpa > 3.5);
    cout << result3 <<endl;
    return 0;
}