#include<iostream>
#include<string>
using namespace std;

//WAP to input a string and return no of times the neighbouring characters..
//.. are different from each other.

int main(){

    string s = "ahelljjiiremfllee";
    int count = 0 , a=1;

    int n = s.length()-1;
    if ( s[0] != s[1]) count +=1;
    if ( s[n] != s[n-1]) count +=1;

    while( a < n-1 ){
        if(s[a] != s[a-1] && s[a] != s[a+1] ){
            count += 1;
            a++;
        }
        else a++;
    }
    cout<<count;
    return 0;
}