#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
    string str ="Hello , i am Mayank and i am 19 years old .";
    stringstream ss(str);
    vector<string> v;
    string temp;

    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());

    int maxcount = 1 , count = 1;
    for(int i = 1 ; i < v.size() ; i++){
        if(v[i] == v[i-1]) count++;
        else count = 1;
        maxcount = max(maxcount,count);
    }

    count = 1;
    for(int i = 1 ; i < v.size() ; i++){
        if(v[i] == v[i-1]) count++;
        else count = 1;
        if (count == maxcount) cout << v[i] <<" "<<maxcount<<endl;
    }
    return 0;
}