#include<iostream>
using namespace std;
int main(){
    int n , m;
    printf("Enter no of rows:");cin >> n;
    printf("Enter no of columns:");cin >> m;

    int arr[n][m];
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cout<<"Enter the value of ["<<i<<","<<j<<"] :";cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<"The required array is :\n";
    for ( int i = 0 ; i < n ; i++ ){     //Printing rows(i)
        for ( int j = 0 ; j < m ; j++ ){ //Printing columns(j)
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 

    return 0;
}