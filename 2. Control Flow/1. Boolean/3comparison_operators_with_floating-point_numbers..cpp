#include<iostream>
using namespace std;

int main(){
    int age = 40;
    
    // 40 equals to 40.0 is true
    bool result1 = (age == 40.0);
    cout << result1 << endl;  //1
  
    // 40 not equals to 40.0 is false
    bool result2 = (age != 40.0);
    cout << result2 << endl;  // 0
  
    // 40 equals to 39.2 is false
    bool result3 = (age == 39.2);
    cout << result3 << endl;  // 0
  
    // 40 not equal to 39.2 is true
    bool result4 = (age != 39.2);
    cout << result4 <<endl;  //1
 
    return 0;
}