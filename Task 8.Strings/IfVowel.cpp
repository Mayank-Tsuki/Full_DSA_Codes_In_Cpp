#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string:";
    cin>>str;
    int count = 0;
    for(int i = 0 ; str[i] != '\0' ; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count+=1;
        }
    }
    cout<<count;
    return 0; 
}