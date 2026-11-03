#include<iostream>
using namespace std;

void change(int a[]){   //we don't have to give any value inside the box!
    a[0]=99;

}
void change2d(int a[3][3]){  //compulsory to give row and column in box!
    a[0][0]=99;
}

int main(){
    int a[3] ={1,2,3};
    cout<<a[0]<<endl;
    change(a);
    cout<<a[0]<<endl;

    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][0]<<endl;
    change2d(arr);
    cout<<arr[0][0];

    
}