#include<iostream>
using namespace std;

//Fnc is composite or not!

int main(){
    int n;
    bool flag;
    flag=false;
    cout<<"Enter the number that you wanna check :";
    cin>>n;
    for( int i= 2 ; i<=n-1 ; i++){
        if (n%i==0){
            flag=true;
            break;
        }
    }
    if( flag==true){
        cout<<"Composite!";
    }
    else if(n==1){
        cout<<"Neither Prime nor Composite!";
    }
    else{
        cout<<"Prime!";
    }
    return 0;
}