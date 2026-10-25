#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "mayankrawat cuz"; //" "->space takes the first place
    string a = "MayaNk";
    string b = "MayaN1k*#<";
    cout<<s<<endl;

    //sorting data!
    sort(s.begin(),s.end());
    sort(a.begin(),a.end()); // capital letters take the first value
    sort(b.begin(),b.end());

    cout<<s<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}