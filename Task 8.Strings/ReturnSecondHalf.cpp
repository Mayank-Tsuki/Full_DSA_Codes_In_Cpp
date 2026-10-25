#include<iostream>
#include<string>
using namespace std;

//input a string of even length and return value from second half.

int main(){
    string s = "Mayank Tsuki";
    int n = s.length()/2;
    cout<<s.substr(n);
    return 0;
}
