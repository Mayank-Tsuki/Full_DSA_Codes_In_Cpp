#include<iostream>
using namespace std;

//Find the maximum value out of all the elements in the array.

int main(){
    int size;
    cout<<"Enter the size of arr : ";cin>>size;
    int arr[size];
    cout<<"Enter the values :";
    for (int j= 0 ; j< size ; j++){
        cin>>arr[j];
    }
    int max=arr[0];

    for (int i = 0 ; i < size ; i++){
        if (arr[i] > max){
            max=arr[i];
        }
    }
    cout<<"The maximum value in the array is : "<< max;

    return 0;
}