#include<iostream>
#include<vector>
using namespace std;

//Move all negative numbers to beginning and positive to end with constant extra space.

void display(vector<int>& a){
    for (int i = 0; i < a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}
void sort(vector<int>& a){
    int i=0 , j=a.size()-1;

        while (i<j){
            if(a[i]>0 && a[j]<0){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i++;
                j--;
            }
            if (a[i] < 0) i++;
            if( a[j] > 0) j--;
        }
    
}

int main(){
    vector<int>v={1,2,-3,4,-5,6,-7,-8,-9};
    display(v);
    sort(v);
    display(v);

    return 0;
}
