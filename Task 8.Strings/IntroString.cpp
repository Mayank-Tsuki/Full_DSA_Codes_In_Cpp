#include<iostream>

using namespace std;
int main(){
    char str[] = {'a','b','c','d','e','f'};
    for(int i = 0 ; str[i] != '\0' ; i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;

    //\0 is used to terminate the string so using it in btw wi ll terminate the str

    cout<<str;
    cout<<endl;

}