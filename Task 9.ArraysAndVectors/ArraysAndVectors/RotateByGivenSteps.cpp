#include<iostream>
#include<vector>
using namespace std;

//Rotate the given array 'a' by k steps,where k is non-negative.
//Note: k can be greater than n as well where n is the size of array 'a'.
//ex->{1,3,2,4,3,4,1,6} if k=2, display {1,6,1,3,2,4,3,4}

void display(vector<int>& a){
    for( int z= 0 ;z < a.size() ; z++){
        cout<<a[z]<<" ";
    }
    cout<<endl;
}
void reverse(vector<int>&c ,int k){
while(k>0){
    int i=0,j=c.size()-1;
    for ( int k=0 ; k < c.size() / 2 ; k++){
        int temp;
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
        i++;
        j--;
    }
    i=1;
    j=c.size()-1;
    for ( int k=0 ; k < c.size() / 2 ; k++){
        int temp;
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
        i++;
        j--;
    }
    k--;
}
}
int main(){
    vector<int>a={1,2,3,4,5,6,7,8,9};
    int k,n=a.size();
    while(k>n){     //Just to reduce time complexity,ifk=100000000,just take mod and then find least value for k!
        k=n%k;
    }
    display(a);
    cout<<"Enter how many steps you want to change:";cin>>k;

    reverse(a,k);
    display(a);

    return 0;
}