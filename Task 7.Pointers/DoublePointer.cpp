//DOUBLE POINTER(GIVES POINTER ADDRESS)!

#include<iostream>
using namespace std;
int main(){
    int x = 122;
    int* ptr1 = &x;
    int** ptr2 = &ptr1;
    
    //VALUE OF X
    cout<<x<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;

    //ADDRESS OF X
    cout<<&x<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr2<<endl;

    //ADRESS OF PTR1
    cout<<ptr2<<endl;

    return 0; 
}