#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "My name is Mayank Rawat.";
    cout<<str.size()<<endl;   //Both will return same value
    cout<<str.length()<<endl; //Indexing is found out [ 0 - str.length()-1]

    cout<<str<<endl;      //push_back() function
    str.push_back('H');
    str.push_back('e');
    str.push_back('l');
    str.push_back('l');
    str.push_back('o');
    str.push_back('!');
    cout<<str<<endl;

    str.pop_back();        //pop_back() function
    cout<<str<<endl;

    string t = " i m a boy!"; // [+] operator used
    str = str + t;
    cout<<str<<endl;

    reverse(str.begin() , str.end()); // reverse used in vector can be used in string also!
    cout<<str<<endl;
    
    string a = "abcde";
    reverse(a.begin() + 2 , a.end()-1); // reverse by indexing
        // Plus 2 from begin    Minus from last
    cout<<a<<endl;

    //a.substr(idx,len) -> return length from idx to len
    cout<<a.substr(2,2);
    cout<<endl;

    int x = 100;

    //string s = sting(x) -> this is not accepted in string
    string s = to_string(x);
    cout<<s<<endl;

    sort(s.begin(),s.end());
    cout<<s<<endl;


    return 0;
}
