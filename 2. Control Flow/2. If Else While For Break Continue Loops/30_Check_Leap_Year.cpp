#include<iostream>
using namespace std;
int main(){
    int year;
    cout <<"Enter Year to check: " ;
    cin >> year;

    if (year % 400 == 0 ){
        cout << "Leap Year" <<endl;
    }

    else if (year % 100 == 0){
        cout << "Not Leap Year"<<endl;

    }

    else if (year % 4 == 0){
        cout << "Leap Year" <<endl;
    }

    else {
        cout << "Not a Leap Year" <<endl;
    }
    return 0;
}

// Every leap year follows a certain pattern.

// A leap year is perfectly divisible by 4 except for century years (years ending with 00)
// A century year is a leap year only if it is perfectly divisible by 400.
// 2017 - Not a leap year. Not divisible by 4. 
// 2000 - Leap year. Century year that is divisible by 400
// 1900 - Not a leap year. Century year but not divisible by 400
// 2012 - Leap year. Divisible by 4 and not a century year.
