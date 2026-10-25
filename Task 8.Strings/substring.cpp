#include<iostream>
#include<string>
using namespace std;
int main(){
    string s ="abcdef";
    //s.substr(idx) -> return all values from idx(included) to end!
    cout<<s.substr(4);
    cout<<endl;
    //s.substr(idx,len) -> return length from idx to len
    cout<<s.substr(2,2);
    cout<<endl;

}