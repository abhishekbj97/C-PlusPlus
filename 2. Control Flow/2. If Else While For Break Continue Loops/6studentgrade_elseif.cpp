#include<iostream>
using namespace std;
int main(){
    int student_grade;
    cout << "Enter the grade: ";
    cin >> student_grade;

    if (student_grade > 100 || student_grade < 0) {
        cout << "Invalid" <<endl;
    }
    else if (student_grade >= 35){
        cout << "Passed" <<endl;
    }

    else {
        cout << "failed" <<endl; 
    }
    return 0;
}