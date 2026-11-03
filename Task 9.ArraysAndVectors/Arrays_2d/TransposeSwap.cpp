#include<iostream>
using namespace std;

//WAP to print the transpose of the matrix by the user and stored it in a new matrix.

int main(){
    int m;
    cout<<"Enter the no of rows/column :";cin>>m;
    int arr[m][m];

    for ( int i = 0 ; i < m ; i++){
        for ( int j = 0 ; j < m ; j++){
            cout<<"Enter the value of ["<<i<<","<<j<<"] : ";cin>>arr[i][j];
        }
        cout<<endl;
    }
    //Print
    for ( int i = 0 ; i < m ; i++){
        for ( int j = 0 ; j < m ; j++){ 
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Transpose in the same matrix!
    for ( int i = 0 ; i < m ; i++){
        for ( int j = i+1 ; j < m ; j++){ 
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    //Printing transpose matrix
    for ( int i = 0 ; i < m ; i++){
        for ( int j = 0 ; j < m ; j++){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }

}