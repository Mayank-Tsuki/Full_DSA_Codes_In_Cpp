#include<iostream>
#include<string>
using namespace std;

//Return the total number of the digits in a number without
//using any loop.
int main(){
    int n ;
    cout<<"Enter number:";cin>>n;

    string s = to_string(n);
    cout<<"Total number of digits:"<<s.length();
    cout<<endl;

}