#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the 1st number: ";cin >> a;
    cout<<"Enter the 2nd number: ";cin >> b;
    cout<<"Enter the 3rd number: ";cin >> c;

    if (((a+b)>c) && ((b+c)>a) && ((c+a)>b)) {
        cout<<"The numbers can be the side of a triangle!";
    }
    else{
        cout<<"No they can't be the sides of a triagnle!";
    }
    return 0;
}