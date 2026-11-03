#include<iostream>
using namespace std;

//Write a program to store roll number and marks obtained by 4 students..
//..side by side in a matrix.

int main(){

    int arr[2][4];

    for (int i = 0 ; i < 2 ; i++){
        cout<<"Enter roll number and marks";
        for (int j = 0 ; j < 4 ; j++){  
            cin >> arr[i][j] ;
        }
    }
    cout<<endl<<"The required array is :\n";
    for ( int i = 0 ; i < 2 ; i++ ){     //Printing rows(i)
        for ( int j = 0 ; j < 4 ; j++ ){ //Printing columns(j)
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}