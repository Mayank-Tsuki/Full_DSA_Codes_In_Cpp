#include<iostream>
using namespace std;

//getting remainder by two methods!

int main(){
    
    //divisor = divident*quotient + remainder
    //remainde r= divisor - divident*quotient

    int a=10,b=3;
    int quotient=a/b;
    cout<< "The remainder of 10/3 is:"<< a-(b*quotient)<<endl;
    
    //using modulus operator(%)

    cout<< "the remainder of 10/3 is:" << 10 % 3;

    return 0;
}