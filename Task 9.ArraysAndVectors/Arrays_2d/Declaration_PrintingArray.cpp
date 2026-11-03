#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3]={1,2,3,4,5,6,7,8,9};
    
    int arr3[4][2] = {{1234,56},{34,53},{45,78},{12,58}};
    int arr4[4][2] = {1234,56,34,53,45,78,12,58};

    int arr5[2][3] = {12,23,34,5,34,56};
    int arr6[][3]  = {12,23,34,5,34,56}; //only if you are declaring at time of assigning arr(like here!)

    // cout<<arr[1][1]<<endl;
    // cout<<arr2[1][1]<<endl;
    // cout<<arr3[1][1]<<endl;
    // cout<<arr4[1][1]<<endl;
    // cout<<arr5[1][1]<<endl;
    // cout<<arr6[1][1]<<endl;

    //PRINTING FULL ARRAY!
    for ( int i = 0 ; i < 3 ; i++ ){     //Printing rows(i)
        for ( int j = 0 ; j < 3 ; j++ ){ //Printing columns(j)
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
    return 0;
}