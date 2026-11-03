#include<iostream>
using namespace std;
int main(){
    int arr[]={12,3,4,53,56};
    int* ptr = arr; //Giving address

//  int* ptr = arr[0];  Both are wrong
//  int* ptr = &arr;    syntax for pointers.

cout<<ptr<<endl;
cout<<&arr[0]<<endl;
//If we have given address to pointer of an array, it have full rights to to 
//manupulate it, simplying by using pointer name insteed of array.
//for ex:

    for (int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    ptr[0]=23;
    ptr[3]=70;
    ptr[4]=35;

    for (int i = 0 ; i < 5 ; i++){
        cout<<ptr[i]<<" ";          //Manupulation by pointer!
    }
    cout<<endl;
//Note: In func we can also access it by pointer and then manupulate the array using pointer.
    ptr=arr;                  //ptr is pointing to 1st element
    *ptr = 8;                 //ptr[0]=8
    ptr++;                    //ptr pointting to 2nd element
    ptr++;                    //ptr pointting to 3rd element
    *ptr = 9;                 //ptr[2]=8
    ptr--;                    //ptr pointting to 2nd element
    ptr--;                    //ptr pointting to 1st element
    for (int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }
    ptr=arr;                  //ptr is pointing to 1st element again
    cout<<endl;
}