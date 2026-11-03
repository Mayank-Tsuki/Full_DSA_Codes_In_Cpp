#include<iostream>
#include<vector>
using namespace std;

//Sort the arrays of 0's and 1's.

void display(vector<int>& v){
    for (int i=0 ; i< v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void ZeroOne(vector<int>& v){
    int i = 0, j = v.size() - 1 ;

    while(j>i){  //For condition will make it complicated ,so  use while condition!
        if ( v[i]== 1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;

        }
        if ( v[i]== 0) i++; 
        if ( v[j]== 1) j--; 
    }
    return ;
}
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(0);
    display(vec);
    ZeroOne(vec);
    display(vec);

    return 0;
}