#include <iostream>
using namespace std;
 
int main() {
 
    int number = 21;
  
    cout << (number >= 21.0) << endl;        // 1
    cout << (21.0 > number) << endl;          // 0
  
    cout << (20.99 >= number) << endl;      // 0
    cout << (number >= 20.99) <<endl;               // 1
  
    return 0;
}