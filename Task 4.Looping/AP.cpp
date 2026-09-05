#include <iostream>
using namespace std;

//Display this AP- 1,3,5,7,9... n terms

//method 1
int main(){
     int n;
     cout<<"Enter the value of n :";cin>>n;

     for (int i=1 ; i<= 2*n-1 ; i+=2){
        cout<< i <<endl;
     }

// method 2
     int s=1;
     for (int i=1 ; i<= n ; i++){
        cout << s <<endl;
        s=s+2;
     }


     return 0;
}