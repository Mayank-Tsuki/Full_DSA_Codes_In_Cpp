#include<iostream>
using namespace std;

//Take 2 values from user and find the value of power of 1st no. to 
//..other.

int main(){
    int num,pow;
    cout<<"Enter Base :";cin>> num;
    cout<< "Enter Exponent :";cin>> pow;

    int power=1;            //For pow >0
    float powerN=1.0;       //For pow <0

    if ( pow > 0){
        for (int i=1 ; i<=pow ; i++){
            power = power * num;
        cout<<"The final value is :"<<power;
        }
    }
    else if(num==0 && pow==0){
        cout<<"Not defined!";
    }
    else{
        int powN=-(pow);
        for (int i=1 ; i<=powN ; i++){
            powerN = powerN * num;}
        powerN=(1/powerN);
        cout<<"The final value is :"<<powerN;   
    }
    return 0;
}