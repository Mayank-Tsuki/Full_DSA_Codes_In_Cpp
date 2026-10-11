// Print the pattern
//  1 
//  0  1
//  1  0  1
//  0  1  0  1
//  1  0  1  0  1

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of side :";cin>>row;

    //Method 1 -> using extra variable

    int var , a = 1;
    for (int i=1 ; i<=row ; i++){
        var=a;
        for (int j=1 ; j<=i ; j++){           
            cout<<" "<<var<<" ";
            var=!(var);
        } 
        cout<<endl;
        a=!(a);
    }
//Observation i found out at last of the code that 1 is at strt...
//..of odd places and 0 is at start of even places...
// ..so we can strt as if i%2==0 ->start with 1 and then use not fnc..
//...and if i%2!=0 -> start with 0 and then use not fnc.

    //Method 2 ->  Maths(Observe by writting it)
    //            if i==j , and if i&j both are odd or even(i+j==even)
    //            then only 1 else 0; Now lets code it

    for (int i=1 ; i<=row ; i++){
        for (int j=1 ; j<=i ; j++){
            if( i==j || (i+j)%2==0 ){
                cout<<" "<<1<<" ";
            }
            else{
                cout<<" "<<0<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}