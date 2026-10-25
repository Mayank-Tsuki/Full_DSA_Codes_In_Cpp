#include<iostream>
#include<algorithm>
#include<sstream>
#include<string>

using namespace std;
int main(){

    //Method 1 :
    string str = "0123 0023 456 00182 984 2904";
    stringstream ss(str);
    string  temp;
    int count = 0;
    while(ss>>temp){
        int i = stoi(temp);
        if (count < i) count = i;
    } 
    cout<<"The maximun number in the string is:"<<count;
    cout<<endl;

    //Method 2 :
    string arr[] = {"0123","0023","456","00183","984","2904"};
    count = stoi(arr[0]);
    for(int i = 1 ; i <= 5 ; i++){
        int x = stoi(arr[i]);
        if( count < x) count = x;
    }
    cout<<"The maximun number in the string is:"<<count<<endl;
}