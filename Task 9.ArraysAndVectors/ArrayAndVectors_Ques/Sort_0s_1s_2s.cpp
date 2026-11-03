#include<iostream>
#include<vector>
using namespace std;

//Sort the arrays of 0's,1's and 2's respectively in increasing order and do..
//..all in one fuction.

void display(vector<int>& v){
    for (int i=0 ; i< v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

//Main fnc[method1 : Two Pass Solution!]
void sortcolors(vector<int>& nums){

    int cont0 = 0, cont1 = 0 ,cont2 = 0 ,n=nums.size();
    for ( int i = 0 ; i < n ; i++){
        if (nums[i] == 0) cont0++;
        else if (nums[i] == 1) cont1++;
        else cont2++;

    }
    for( int j = 0 ; j < n  ; j++){
        if(cont0 > j) nums[j] = 0;
        else if(cont1 + cont0 > j) nums[j] = 1;
        else nums[j] = 2;
    }
    return;
}
 //Main function end!
int main(){
    vector<int>vec={2,0,2,1,1};
    display(vec);
    sortcolors(vec);
    display(vec);
    return 0;
}