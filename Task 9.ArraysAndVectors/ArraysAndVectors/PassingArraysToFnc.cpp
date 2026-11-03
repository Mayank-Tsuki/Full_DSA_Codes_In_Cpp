#include<iostream>
using namespace std;

void display(int a[],int n){
    for (int i = 0; i<n ; i++){
        cout<< a[i] << " ";
    }
    cout<<endl;
    return;
}

void change(int a[],int n){
    a[0] = 3600;
    a[1] = 6500;
    return ;
}
int main(){
    int arr[] = {12,34,2,5,23}; 
    int size = sizeof(arr)/4;    //Note: Size should be send from main statement,we can't find find of the
    display(arr , size);                //array from other function because in other fnc it act as a pointer.
    change(arr , size);
    display(arr , size);
    return 0;
}
//Ques. When you pass array as an argument to a function,what actually gets passed?
//Ans . Adress of the array or the address of the first element of the array.