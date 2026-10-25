#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//input a string of even length and reverse first half 
int main(){
    string s = "Mayank tsuki";
    int n = s.length();
    reverse(s.begin(),s.begin() + (n/2));
    cout<<s<<endl;

    return 0;
}