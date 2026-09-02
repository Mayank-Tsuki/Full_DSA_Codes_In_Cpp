#include<iostream>
using namespace std;

//given the marks of the student.if the marks are greater than 33 print
//the result as pass otherwise fail without using if-else statement.

int main(){
    int marks;
    cout<<"Enter your marks: ";cin>>marks;

    marks>=33 ? cout<<"You are Pass!" : cout<< "You are Fail!";
    return 0;
}