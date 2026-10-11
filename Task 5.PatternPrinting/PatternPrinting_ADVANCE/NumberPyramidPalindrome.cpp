// Pattern:
//           1 
//        1  2  1
//     1  2  3  2  1
//  1  2  3  4  3  2  1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";cin>>n;

    for (int i=1 ; i<=n ; i++){
        int a=i-1;
        for (int j=1 ; j <=n-i ; j++){
            cout<<"   ";
        }
        for (int k=1 ; k <= i ; k++){
            cout<<" "<<k<<" ";
        }
        for (int l=1 ; l <=i-1 ; l++){
            cout<<" "<<a<<" ";
            a=a-1;
        }
        cout<<endl;
    }
    return 0;
}