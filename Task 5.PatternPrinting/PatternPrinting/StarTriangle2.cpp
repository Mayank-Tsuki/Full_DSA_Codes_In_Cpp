//Print the pattern
// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the value of n[No. of rows]:";cin>>row;

    int column=row;
    for (int i=1 ; i<=row ; i++){
        for (int j=1 ; j<=column ; j++){
            cout<<"*";
        }
        cout<<endl;
        column-=1;
    }

    //Method 2 ->How?
    //    1 2 3 4
    // 1. * * * *    rows number + no of stars in each line= rows + 1
    // 2. * * *      rows number = i
    // 3. * *         so, no of stars = [rows + 1 - i]
    // 4. *

    for (int i=1 ; i<=row ; i++){
        for (int j=1 ; j<=row + 1 - i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}