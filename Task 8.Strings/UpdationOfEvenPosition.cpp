#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size:-";cin>>n;
    char str[n];
    for(int i = 0 ; i < n ; i++){
        cin>>str[i];
    }
    //printing str
    for(int i = 0 ; i < n ; i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    //editing even indexing
    for(int i = 0 ; i < n ; i++){
        if ( i % 2 == 0) str[i] = 'o';
    }
    //printing new str
    for(int i = 0 ; i < n ; i++){
        cout<<str[i]<<" ";
    }
    return 0; 
}