// Print the pattern
//              * 
//           *  *
//        *  *  *
//     *  *  *  *
//  *  *  *  *  *
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the value of n:";cin>>row;

    for (int i=row ; i>=1 ; i--){
        for (int j=1 ; j<=row ; j++){   //we have to print entire square box that's..
            if (j>=i){                  //...why i am using j<=row
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}
