#include<iostream>
using namespace std;
int main(){

    //calc percentage of given 5 subs

    float x1 = 98;      //maths
    float x2 = 97;      //eng
    float x3 = 95;      //phy
    float x4 = 96;      //chem
    float x5 = 92;      //bio
    float percentage = (x1+x2+x3+x4+x5)/5;
    cout<< "percentage of the given 5 subjects are: "<<percentage;

    return 0;
}