//Print the pascals Triangle
//     1 
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

//at is optimised code!

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the vlaue of n:";cin>>n;

    for (int i=0 ; i<=n ; i++){

        int current=1;

        for (int j=0 ; j<n-i ; j++){
            cout<<" ";
        }
        for (int j=0 ; j<= i ; j++){
            cout<<current<<" ";
            current = current*(i-j)/(j+1);  //Here time complexity decreases!
        }
        cout<<endl;

    }
    return 0;

}