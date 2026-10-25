//we can access the value of x by a new operator called dereference operator..
//.. *p = &a , its like the address which is in p , we have to make changes in it or..
//..we want to print it type shit.

#include<iostream>
using namespace std;
int main(){
    int x=122;
    int* p= &x;
    cout<< *p <<endl;
    *p=*p+200;           //Its like x = *p
    cout<<x<<endl;       //Jo bhi changes *p

    cout<<p<<endl<<&x;
    return 0; 
}
