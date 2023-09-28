#include<iostream>
using namespace std;
int main(){
    int day;
    cout << "Enter Number between 1 to 7 to check week and weekend days: " ;
    cin >> day;

    switch(day) {
        case 6:
        case 2:
        case 3:
        case 4:
        case 5:
        cout << "Week Days" <<endl;
        break;

        case 1:
        case 7:
        cout << "Weedend Days" <<endl;
        break;
        
        default:
        cout<< "Invalid input" <<endl;

    }
    return 0;

}