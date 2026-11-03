#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n , m;
    printf("Enter no of rows:");cin >> n;
    printf("Enter no of columns:");cin >> m;

    //input by user!
    int arr[n][m];
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cout<<"Enter the value of ["<<i<<","<<j<<"] :";cin>>arr[i][j];
        }
        cout<<endl;
    }
    //for max element!
    int max = INT_MIN;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            if(max < arr[i][j]){
                max =  arr[i][j];
            }
        }
    }
    cout<<"The max element in the matrix is : "<<max;
    return 0;

}