#include<iostream>
using namespace std;
int main() {
   int x = 3;
   cout << (x = x + 1);
   cout << x;

   return 0;
}