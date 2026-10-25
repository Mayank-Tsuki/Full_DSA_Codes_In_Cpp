#include<iostream>
using namespace std;

//Swaping two numebers by pointer!

void swap(int &x, int &y){   //getting the address here itself
    int temp = x;
    x = y;
    y = temp;
    return;
}

int main(){
    int a,b;
    cout<<"Enter value of a:";cin>>a;
    cout<<"Enter value of a:";cin>>b;
    
    cout<<a<<" "<<b;

    cout<<endl;

    swap(a,b);    
    cout<<a<<" "<<b;
    return 0; 

}