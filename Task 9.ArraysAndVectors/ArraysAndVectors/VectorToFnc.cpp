#include<iostream>
#include<vector>
using namespace std;

//Adrress going to function!

void change(vector<int>a){      //Note vector give pass by reference value 
    a[0]=100;
    return ;
}
void newchange(vector<int> &a){      //only giving its add[&],we can retrive the value inside it 
    a[0]=234567;
    return ;
}

int main(){
    vector<int> v;
    v.push_back(12);
    v.push_back(23);
    v.push_back(9);
    v.push_back(67);
    for ( int i=0 ; i< v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for ( int i=0 ; i< v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    newchange(v);
    for ( int i=0 ; i< v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;

}