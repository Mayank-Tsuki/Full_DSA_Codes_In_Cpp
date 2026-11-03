#include<iostream>
using namespace std;

//WAP to print the transpose of the matrix by the user and stored it in a new matrix.

int main(){
    int n , m;
    cout<<"Enter the no of rows :";cin>>n;
    cout<<"Enter the no of columns :";cin>>m;
    int arr[n][m];
    int transpose[m][n];

    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            cout<<"Enter the value of ["<<i<<","<<j<<"] : ";cin>>arr[i][j];
        }
        cout<<endl;
    }
    //Print
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){ 
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
    //Transpose
    for ( int i = 0 ; i < m ; i++){
        for ( int j = 0 ; j < n ; j++){ 
            transpose[i][j] = arr[j][i] ;
        }
    }
    //Printing transpose matrix
    for ( int i = 0 ; i < m ; i++){
        for ( int j = 0 ; j < n ; j++){
            cout << transpose[i][j] << " ";
        }
        cout<<endl;
    }

}