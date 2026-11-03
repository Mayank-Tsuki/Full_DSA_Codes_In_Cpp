#include<iostream>
#include<vector>
using namespace std;

//find doublet in the vector={1,3,2,4,3,4,1,6} whose sum is equal to a given value 7.

int main(){
    vector<int>vec={1,3,2,4,3,4,1,6};
    for(int i = 0 ; i < vec.size() ; i++){
        for(int j = i ; j < vec.size() ; j++){
            if ((vec[j] + vec[i])==7){
                cout<<"("<<i<<","<<j<<")"<<" ";
            }
        }

    } 

    return 0;
   
}