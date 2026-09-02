#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<< "Enter the alpha: ";cin >> ch;
    int num = (int)ch;

    //a-z -> 97 to 122
    //A-Z -> 65 to 90         

    if((65 <= num && num<= 90) || (97 <= num && num<= 122)){   //(&& > ||)
        cout<<"Yes! it's an alphabet!!";
    }
    else{
        cout<<"No! it's not an alphabet";
    }
    return 0;
}