#include<iostream>
#include<algorithm>
using namespace std;
//Given two strings s and t ,return true if t is an anagram of s,and false otherwise.
int main(){
    string s= "physicswallah";
    string t= "wallahphysics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)  cout<<"Yes,it is an anagram!";
    else cout<<"No! its not an anagram.";

    return 0;
}