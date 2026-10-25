#include<iostream>
#include<string>
using namespace std;
int main(){

    //Sting str can take a line but string s can't take words after space!

    string str="Mayank Rawat is a first year btech student";
    cout<<str;
    cout<<endl<<endl;
    string s;
    // cin>>s;
    // cout<<s;
    // cout<<endl;

    //getline(char,size) -> fnc to get whole line in string

    getline(cin,s);
    cout<<s;


    return 0;
}