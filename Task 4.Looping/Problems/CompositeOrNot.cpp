#include<iostream>
using namespace std;

//Fnc is composite or not!

int main(){
    int n;
    cout<<"Enter the number that you wanna check :";
    cin>>n;
     for( int i= 2 ; i<=n-1 ; i++){
        if (n%i==0){
            cout<<n<<" is composite number!" << endl;
            break;
        }
     }  
    return 0;
}