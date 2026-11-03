#include<iostream>
#include<vector>
using namespace std;

//Write a program to copy the contents of one vector into another in the reverse order.
//example -> {1 3 2 4 3 4 1 6} --> {6 1 4 3 4 2 3 1}

int main(){
    vector<int>vec={1,3,2,4,3,4,1,6};
    vector<int>newvec;

    for( int j=0 ; j < vec.size() ; j++){
        cout<<vec[j]<<" ";
    }
    cout<<endl;

    for (int i = vec.size()-1 ; i >= 0; i--){
        newvec.push_back(vec[i]);
    }

    for( int j=0 ; j < newvec.size() ; j++){
        cout<<newvec[j]<<" ";
    }
    cout<<endl;
    return 0;

}
