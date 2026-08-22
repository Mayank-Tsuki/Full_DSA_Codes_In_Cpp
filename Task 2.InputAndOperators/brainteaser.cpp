#include<iostream>
using namespace std;
int main(){
    
    //let A=1,B=2,C=3.....Z=26.now take any alphabet as input
    //and print its number.

    char ch;
    cout << "enter your uppercase alphabet: ";
    cin >> ch;
    cout << int(ch)-64;

    return 0;
}