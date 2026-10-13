//Finding the Greatest common divisor of two numeber!

#include<iostream>
using namespace std;

int HCF(int x,int y){
    int count=1 ;
    for (int i=1 ; i<=min(x,y)  ; i++){
        if ( x%i == 0 && y%i==0){
            count = i;
        }
    }
    return count;
}


int main(){
    int n,m;
    cout<<"Enter the 1st number that you want HCF of :";cin>>n;
    cout<<"Enter the 2nd number that you want HCF of :";cin>>m;
    int hcf=HCF(n,m);
    cout<<"The HCF of "<<n<<" and "<<m<<" is :"<<hcf;
    return 0;
}