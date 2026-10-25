#include<iostream>
using namespace std;

//Swaping two numebers by pointer!

void swap(int* x, int* y){   //address is receiving here by pointer
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main(){
    int a,b;
    cout<<"Enter value of a:";cin>>a;
    cout<<"Enter value of a:";cin>>b;
    
    cout<<a<<" "<<b;

    cout<<endl;

    swap(&a,&b);           //address is going 
    cout<<a<<" "<<b;
    return 0; 
}
//There is one more easy method to do swapping ,it is done in swap2 file in pointer.