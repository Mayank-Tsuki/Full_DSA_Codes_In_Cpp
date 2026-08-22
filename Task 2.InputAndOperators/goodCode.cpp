#include<iostream>
using namespace std;
int main(){
    int p,q;
    
    cout<<"enter two numbers";
    cin >>p >> q;
    cout <<p <<" "<< q<< endl;
    p += q -= p;          //first q=q-p is calculating then 
    cout <<p <<" "<<q;    //p=p+q
    return 0;
}
