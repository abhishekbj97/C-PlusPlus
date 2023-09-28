#include<iostream>
using namespace std;
int main(){
    int student_marks;
    cout << "Enter the Marks: ";
    cin >> student_marks;

    if (student_marks >= 35) {
        cout <<"Passed";
    }

    else {
        cout <<"fail" <<endl;
    }

    return 0;

}