#include<iostream>
#include<vector>
using namespace std;

//Write a program to reverse vector without using a new vector.
//example -> {1 3 2 4 3 4 1 6} --> {6 1 4 3 4 2 3 1}

void display(vector<int>& a){
    for( int z= 0 ;z < a.size() ; z++){
        cout<<a[z]<<" ";
    }
    cout<<endl;
}
 
int main(){
    vector<int>vec={1,3,2,4,3,4,1,6};
    int i=0 , j=vec.size()-1;

    display(vec);

    //reverse by for loop
    for ( int k=0 ; k < vec.size() / 2 ; k++){
        int temp;
        temp=vec[i];
        vec[i]=vec[j];
        vec[j]=temp;
        i++;
        j--;
    }
    display(vec);
    return 0;

}