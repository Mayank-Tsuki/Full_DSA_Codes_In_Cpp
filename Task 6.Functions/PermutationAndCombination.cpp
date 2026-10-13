//Find the Permutation and Combination of two numbers

#include<iostream>
using namespace std;

int Factorial(int x){                               //Factorial function!
    int fac=1;
    for (int i=1 ; i<=x; i++){
        fac=fac*i;
    }
    return fac;
}

void Combination(int n,int r){                      //Permutation function!
    int a=Factorial(n);
    int b=Factorial(r);
    int c=Factorial(n-r);

    b=b*c;
    float permu=1.0/b;
    cout<<"The Combination is :"<<a*permu<<endl;

}

void Permutation(int n ,int r){                     //Combination function!
    int a=Factorial(n);
    int b=Factorial(n-r);

    float combu=1.0/b;
    cout<<"The Permutation is :"<<a*combu<<endl;

}

int main(){                                          //Main code!
    int r,n;
    cout<<"Enter value of n:";cin>>n;
    cout<<"Enter value of r:";cin>>r;

    if(n>r){
        Permutation(n,r);
        Combination(n,r);
    }
    else cout<<"n can't be smaller then r,so wrong input!";
    return 0 ;
}
