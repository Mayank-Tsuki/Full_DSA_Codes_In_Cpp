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

int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(1);
    display(vec);

    //Method 1: count total 0's and 1's and then put total zero in first and then total 1's.

    int count0 = 0 ,count1 = 0;
    for (int i=0 ; i< vec.size() ; i++){
        if (vec[i] == 0)  count0++;
        // else   count1++       //This is your choice you can open it or not!;
    }

    for (int j=0 ; j< vec.size(); j++){
        if ( count0 > 0) vec[j] = 0;   
        else vec[j] = 1;

        count0--;
        
    }
    display(vec);
    return 0;
}//Note here we are travelling two times in a loop.
//But if condition is that we want to do in a single time traveling.