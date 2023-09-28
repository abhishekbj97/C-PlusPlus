#include<iostream>
using namespace std;

int main(){
    int number = 10;
    bool res1 = !(number > 11);
    cout << res1 <<endl;
    
    bool res2 = !(number > 10);
    cout << res2 <<endl;

    bool res3 = !(number >= 10);
    cout << res3 <<endl;

    return 0;
}