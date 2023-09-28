#include<iostream>
using namespace std;
int main(){

    int marks;
    cout<< "Enter the Student Marks: ";
    cin >> marks;

    if (marks >= 35) {
        cout << "Congratulation you scored more than 35 or equal" <<endl;
    }
    
    cout << "Student Marks was below 35" <<endl;
    return 0;
}