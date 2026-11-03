#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& a){
    for (int i = 0 ; i < a.size() ; i++){
        cout<<a[i] << " ";
    }
    cout<<endl;
}

int trap(vector<int>& height){
    
    int n = height.size();

    //prev array construct!
    int prev[n];
    prev[0] = -1;
    int max = height[0];               
    for ( int i = 1 ; i < n ; i++){    
        prev[i] = max;
        if ( height[i] > max) max = height[i];
    }

    //next array construct!
    int next[n];
    max = height[n-1];
    next[n-1]=-1;
    for ( int i = n-2 ; i >=0 ; i--){
        next[i] = max;
        if ( height[i] > max) max = height[i];
    }

    //assigning min value to another arr!
    int mini[n];
    for (int i = 0 ; i < n ; i++){
        mini[i] = min(prev[i] , next[i]);
    }

    //calculating water stored!
    int water = 0;
    for (int i = 1 ; i < n-1 ; i++){
        if (height[i] < mini[i]){
            water += (mini[i] - height[i]);
        }
    } 
    return water;
 }

int main(){
    vector<int>vec={0,1,0,2,1,0,1,3,2,1,2,1};
    display(vec);
    int value = trap(vec);

    cout<<"The total water stored = "<< value;
    return 0;
}