#include<iostream>
#include<vector>
using namespace std;

//Rotate the given array 'a' by k steps, where k is non-negative no.
//Note:k can be greater than n as well where n is the size of array 'a'.

void display(vector<int>& a){
    for( int z= 0 ;z < a.size() ; z++){
        cout<<a[z]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>a={1,2,3,1,4,5,6,7};
    int k , i ,n=a.size()-1;
    cout<<"Enter size{intial}";cin>>i;
    cout<<"Enter size{final}";cin>>k;

    if(k > n){
        k=n;
    }
    
    display(a);
    
    while(k>i){
        //swaping
        int temp=a[i];
        a[i] = a[k];
        a[k] = temp;
        k--;
        i++;
    }

    display(a);
    return 0;
}
