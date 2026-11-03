#include<iostream>
#include<vector>
using namespace std;

// Reducing the previous method!
// make only one array which can do both next array thing and mini array thing!

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

    //next greatest element array -> prev as next!
    max = height[n-1];
    prev[n-1]=-1;
    for ( int i = n-2 ; i >=0 ; i--){
        if (max < prev[i]) prev[i] = max;
        if ( height[i] > max) max = height[i];
    }

    //calculating water stored!
    int water = 0;
    for (int i = 1 ; i < n-1 ; i++){
        if (height[i] < prev[i]){
            water += (prev[i] - height[i]);
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