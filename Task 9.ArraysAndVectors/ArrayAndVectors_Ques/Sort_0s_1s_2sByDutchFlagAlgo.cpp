#include<iostream>
#include<vector>
using namespace std;

//Sort the arrays of 0's,1's and 2's respectively in increasing order and do..
//..all in one fuction.

void display(vector<int>& v){
    for (int i=0 ; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

//From this pointer is also recaped!
void swap(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

//Main fnc[METHOD 2 : Two Pass Solution , DUTCH FLAG METHOD]
void sortcolors(vector<int>& nums){

    int mid = 0, lo = 0 ,cont2 = 0 ,high = nums.size()-1;

    //1. mid k barre m socho 
    //2. 0 to lo -> 0, hi+1 to end -> 2
    //3. lo to mid-1 -> 1

    while(mid <= high){
        if(nums[mid] == 2){
        swap(nums[mid] , nums[high]);
        high--;
        }
        else if( nums[mid] == 0){
            swap(nums[mid] , nums[lo]);
            mid++;
            lo++;
        }
        else mid++;
    }
    
    
    return;
}

int main(){
    vector<int>vec={2,0,2,1,1};
    display(vec);
    sortcolors(vec);
    display(vec);
    return 0;
}