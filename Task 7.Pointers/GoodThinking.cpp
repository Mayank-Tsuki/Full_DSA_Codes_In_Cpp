#include<iostream>
using namespace std;
int main(){
 int a = 10, b = 20;
 int *ptr = &a;                    //here ptr have a address
 b = *ptr + 1;                    //here value of b is changing
 ptr = &b;                       //here ptr address is changing to address of b
 cout << *ptr << " " << a << " "<< b; 

 cout<<endl<<endl;

 int x = 15, y = 20;
 int *ptr1 = &x;                              
 int *ptr2 = &y;
 *ptr1 = *ptr2;             //here *ptr1=a and *ptr2=b
                        // so a is taking value of 
  cout<<x << " "<< y;                      
}