#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    //Insertion <do not use []>
    v.push_back(12);
    v.push_back(23);
    v.push_back(9);
    v.push_back(67);

    //If you want to update of access you can use v[]
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<endl;

    //For size of vector
    cout<<v.size();
    cout<<endl;

    //Note : v.capacity() -> finds the capacity of the vector
    //vector create double emptyboxes if it doesn't get places to fill the value.
    v.push_back(2);
    cout<<v.capacity();
    cout<<endl;
    v.push_back(3);
    cout<<v.capacity();
    cout<<endl;
    v.push_back(12);
    cout<<v.capacity();
    cout<<endl;
    v.push_back(670);
    cout<<v.capacity();
    cout<<endl;
    v.push_back(100);
    cout<<v.capacity();
    cout<<endl;
    cout<<endl;

    


    return 0;

}