//Write the program to print the matrix in wave form:
// 1 2 3
// 4 5 6
// 7 8 9
// Print = 1 4 7 8 5 2 3 6 9

// More ex:
// 1  2 3 4
// 5  6 7 8
// 9  10 11 12
// 13 14 15 16
// Print = 1 5 9 13 14 10 6 2 3 7 11 15 16 12 8 4

#include<iostream>
using namespace std;
int main(){
    int m , n;
    cout<<"Enter the row of 1st matrix:";cin>>m;
    cout<<"Enter the column of 1st matrix:";cin>>n;

    int  a[m][n];

    cout<<"Enter elements of matrix:"<<endl;
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j++){
            cin>>a[i][j];
        }
    }

    //WAVE PRINT!
    for (int j = 0 ; j < n ; j++){
        if( j % 2 == 0){
            for ( int i = 0 ; i < m ; i++ ){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for ( int i = m-1 ; i >= 0 ; i-- ){
                cout<<a[i][j]<<" ";
            }
        }
    }
        
    return 0;
}
