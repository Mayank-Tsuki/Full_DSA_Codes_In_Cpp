#include<iostream>
using namespace std;
int main(){

    //print number is even or odd

    int num;
    cout << "enter your number: ";
    cin >> num;
    if(num % 2 == 0){                            //(==)->comparision operator
        cout << "your number is even!"<<endl;
    }
    else {
        cout << "your number is odd!"<<endl;
    }

    //ques. take a positive integer and tell whether it is divisible then 5 or not

    int num1;
    cout<<"enter your number: ";
    cin>>num1;

    if(num1%5==0){
        cout<< "the number is divisible by 5!!"<<endl;
    }
    else{
        cout<< "the number is not divisible by 5!!"<<endl;
    }
    return 0;
}