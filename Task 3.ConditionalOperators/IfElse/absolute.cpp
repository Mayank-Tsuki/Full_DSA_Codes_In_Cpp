#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<< "enter your number :";
    cin>> num1;
     
    if(num1>0){
        cout<<"The absolute value of the number is :";cout<< num1;
    }
    else{       //n<=0
        cout<<"The absolute value of the number is :";cout<< num1*(-1);
    }
    cout<<endl;

   //short answer for above ques
   //agar hum negative k time pr num ki value hi change krde toh
   //better tarika
   int num2;
   cout<< "enter your number :";
   cin>> num2;

   if (num2<=0){
        num2=-num2;
   }
   cout<<"The absolute value of the number is :";cout<< num2;
   return 0;
}