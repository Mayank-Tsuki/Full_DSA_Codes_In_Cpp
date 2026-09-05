#include<iostream>
using namespace std;

//Check whether the number given by the user is Amstrong number or not.

int main(){
    int n,count,var,copy;
    cout<<"Enter number:";cin>>n;
    count = 0;
    copy = n;
    while( n > 0 ){
        var = n%10;
        count = count + (var * var *var);
        n = n/10;
    }
    if (count == copy){
        cout<<"Yes "<<copy<<" is an Amstrong number!";
    }
    else {
        cout<<"No "<<copy<<" is not an Amstrong number!";
    }
    return 0;

}