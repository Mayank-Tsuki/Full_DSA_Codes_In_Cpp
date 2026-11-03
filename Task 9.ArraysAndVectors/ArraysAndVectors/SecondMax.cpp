#include<iostream>
using namespace std;

//Find the second maximum value out of all the elements in the array.

int main(){
    int size;
    cout<<"Enter the size of arr : ";cin>>size;

    int arr[size];
    cout<<"Enter the values :";
    for (int j= 0 ; j< size ; j++){
        cin>>arr[j];
    }
    int secmax=0;
    int max=arr[0];

    for (int i = 1 ; i < size-1 ; i++){
        if (arr[i] > max){
            secmax=max;
            max=arr[i];

        }
    }
    cout<<"The second maximum value is:"<<secmax;
    return 0;
}