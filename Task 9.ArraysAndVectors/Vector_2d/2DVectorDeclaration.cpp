#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int> > v(3,vector<int> (4,2));//row=3
    cout<<v.size()<<endl;                       //column=4,all have 2 inserted in it
    cout<<v[2][2]<<endl;


    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<v.size()<<endl; //for printing number of rows
    cout<<v[1].size()<<endl; //for printing number of column
    return 0 ;
}
