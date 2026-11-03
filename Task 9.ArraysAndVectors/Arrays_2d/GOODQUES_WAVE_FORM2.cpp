//Write the program to print the matrix in wave form:
// 1 2 3
// 4 5 6      -> Print = 7 8 9 6 5 4 1 2 3 [snake wave]
// 7 8 9

// More ex:
//  1   2  3  4 
//  5   6  7  8    -> 16 15 14 13 9 10 11 12 8 7 6 5 1 2 3 4
//  9  10 11 12
//  13 14 15 16

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
    for (int i = m-1 ; i >= 0 ; i--){
            if ( i % 2 == 0){
                for (int j = 0 ; j < n ; j++){
                    cout<<a[i][j]<<" ";
                }
            }
            else {
                for (int j = n-1 ; j >= 0 ; j--){
                    cout<<a[i][j]<<" ";
                }
            }
        
    }
    return 0 ;
}