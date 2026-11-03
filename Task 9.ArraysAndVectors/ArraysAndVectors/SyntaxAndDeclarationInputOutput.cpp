#include<iostream>
using namespace std;
int main(){
    int arr[7];                     // Declaration [Method 1]
    arr[0]=3;
    arr[1]=12;
    arr[2]=34;
    arr[3]=45;
    arr[4]=12;
    arr[5]=67;
    arr[6]=90;
    for (int i=0 ; i<=6 ; i++){     // Print full array by loop!
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int ar[]={12,45,23,5,23,5,3};  // Declaration [Method 2]

    for (int i=0 ; i<=6 ; i++){    // Print full array by loop!
        cout<<ar[i]<<" ";
    }

    cout<<endl;
    // Input of arrays by user!
    int newarr[5];
    for(int i=0 ; i<=4 ; i++){
        cin>>newarr[i];
    }
    //Output
    for(int i=0 ; i<=4 ; i++){
        cout<<newarr[i]<<" ";
    }
    return 0;
}