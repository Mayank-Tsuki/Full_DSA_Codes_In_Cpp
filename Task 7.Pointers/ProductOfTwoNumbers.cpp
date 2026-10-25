#include<iostream>
using namespace std;

void product(int* x , int*y , int* g){
    *g = (*x)*(*y);

}


int main(){
    int num1,num2,num3;
    cout<<"Enter values:";cin>>num1>>num2;
    int* ptr1=&num1;
    int* ptr2=&num2;
    int* ptr3=&num3;
    product(ptr1,ptr2,ptr3);
    cout<<"The product of the numbers is:"<<*ptr3;
    return 0;
}