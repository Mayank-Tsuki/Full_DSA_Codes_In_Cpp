#include<iostream>
using namespace std;

//Print sum of all the elements in the matrix !

int main(){
    int n , m ;
    cout<<"Enter no of row :";cin>>n;
    cout<<"Enter no of column :";cin>>m;

    int arr[n][m];
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            cout<<"Enter the value of ["<<i<<","<<j<<"] : ";cin>>arr[i][j];
        }
        cout<<endl;
    } 
    int sum = 0;
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            sum += arr[i][j];
        }
    } 
    cout<<"The sum of all the elements of the Matrix = "<<sum;
    return 0;
}