#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

//Push_back , Pop_back , vector.size() , vector.capacity()

        //push_back()
    v.push_back(12);
    v.push_back(23);
    v.push_back(9);
    v.push_back(67);
    v.push_back(1);
    v.push_back(3);
    v.push_back(19);
    v.push_back(627); 
    v.push_back(123);
    v.push_back(2345);
    v.push_back(96);
    v.push_back(6237); 
    v.push_back(125);
    v.push_back(231);
    v.push_back(934);
    v.push_back(6732); 

        //vector.size() / vector.capacoty()

    cout<<"Initital size: "<<v.size()<<endl;
    cout<<"Initial capacity: "<<v.capacity()<<endl;

    cout<<"Values:";
    for (int i=0 ; i< v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

        //pop_back()

    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"New Values[3 values pop out from last] ";
    for (int i=0 ; i< v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"Final size: "<<v.size()<<endl;
    cout<<"Final capacity: "<<v.capacity()<<endl;

        // vector.at()
    vector<int>m;
    m.push_back(12);
    m.push_back(23);
    m.push_back(9);
    m.push_back(67);
    for (int i=0 ; i< m.size() ; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;

    m.at(2)=25;
    m.at(3)=76;
    for (int i=0 ; i< m.size() ; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;

        //sorting values
    // sort(m.begin(),m.end());
    // for (int i=0 ; i< m.size() ; i++){
    //     cout<<m[i]<<" ";
    // }
    // cout<<endl;
    // return 0;
   
}