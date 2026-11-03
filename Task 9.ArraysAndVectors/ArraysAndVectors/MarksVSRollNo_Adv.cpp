#include<iostream>
using namespace std;

// Ques: Given an array of marks of students, if the ..
//..marks of any student is less than 35 print its roll ..
//..number. [roll number here refers to the index of the array.]

int main(){
    int n;
    cout<<"Enter total number of students:";cin>>n;

    int marks[n];

    for( int i=0 ; i < n ; i++){          //Loop starts from 0 thats why i have taken(i < n).
        cout<<i <<" roll number student marks=";cin>>marks[i];
    }
    cout<<"Roll number of failing students :"<<endl;
    for( int i=0 ; i < n ; i++){
        if(marks[i] < 35){
            cout<<i<<endl;
        }
    }
    return 0;
}