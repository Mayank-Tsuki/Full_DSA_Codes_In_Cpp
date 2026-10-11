//Print the pattern
// A B C D E 
// A B C D E
// A B C D E
// A B C D E
// A B C D E

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :";cin>>n;

    for (int i = 65 ; i<= n + 65 -1; i ++){
        for (int j = 65 ; j<= n + 65 -1; j ++){
            cout<<char(j)<<" ";

        }
        cout<< endl ;
    }
    return 0;
}