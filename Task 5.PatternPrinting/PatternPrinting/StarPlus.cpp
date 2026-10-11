// Print the pattern
//     *
//     *
// * * * * * 
//     * 
//     * 
// (n=odd)

#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of row: ";cin>>row;

    for (int  i = 1; i <= row ; i++){
        if (i!=(row+1)/2){
            for (int j =1; j <= row; j++){
                if (j==(row+1)/2){
                    cout<<" * ";
                }
                else{
                    cout<<"   ";
                }
            }
            cout<<endl;
        }
        else{
            for (int j =1; j <= row; j++){
                cout<<" * ";
            }
            cout<<endl;
        }
    }        
    cout<<endl<<endl; 

    //Method 2

    int mid=row/2+1;
    for (int i=1 ; i<=row ; i++){
        for (int j=1 ; j<=row ; j++){
            if ( i == mid || j == mid){
                cout<< " * ";
            }
            else{
                cout<< "   ";
            }
        }
        cout<<endl;
    }
    return 0;

}