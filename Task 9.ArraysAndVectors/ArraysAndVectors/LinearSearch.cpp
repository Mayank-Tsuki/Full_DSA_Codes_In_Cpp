#include<iostream>
using namespace std;

//Find the element x in the array . Take array and ..
//..x as input!

int main(){
    int n;
    cout<<"Enter size :";cin>>n;

    int arr[n];

    //Input array!!
    for (int i = 0 ; i < n ;i++){
        cout<<"Enter the values :";
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the number that you want to check:";cin>>x;

    //check mark
    bool flag=false;

    //Searching element!!
    for (int i = 0 ; i < n ;i++){
        if( arr[i] == x){
            flag=true; 
        }
    }
    if (flag==true) cout<<"Number present!";
    else cout<<"Not present" <<endl;
    return 0;
}