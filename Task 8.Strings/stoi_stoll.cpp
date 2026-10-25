#include<iostream>
#include<string>
using namespace std;

int main(){
    string str ="123456";
    int x = stoi(str);
    cout<<x+1<<endl;
    x += 5;

    string s = "1233243254234234521";
    long long y = stoll(s); 
    cout<<y;
    return 0;
}