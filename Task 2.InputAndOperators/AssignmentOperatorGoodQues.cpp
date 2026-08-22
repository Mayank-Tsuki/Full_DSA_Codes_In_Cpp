#include<iostream>
using namespace std;
int main(){

    bool p = false;
    bool q = false;
    bool r = true;
    cout<<(p==q==r);    //this is going from left to right
                        //that's why, p==q ->1(True) and 
                        // then this==r -> 1(True as 1=1)
    return 0;
}