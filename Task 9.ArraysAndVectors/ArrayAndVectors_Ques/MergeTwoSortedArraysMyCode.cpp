#include<iostream>
#include<vector>
using namespace std;

//display function
void display(vector<int>& a){
    for (int i = 0; i < a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}
//swapping function
void swap(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
 //Logic of sorting [very important]
void sortvec(vector<int>& a){
    int n = a.size() - 1;
    for( int i = 0 ; i < n; i++){
        for ( int j = 0 ; j < n-i ; j++){
            if (a[j] > a[j+1]){
                swap(a[j] , a[ j + 1 ]);
            }
        }
    }

}
//merge function
void Merge(vector<int>& a,vector<int>& b){
    int size=a.size();

    for ( int j = 0 ; j < size ; j++){
        b.push_back(a[j]);
    }
    return ;

}
//main function
int main(){
    vector<int>vec={1,2,3,7,11,100};
    vector<int>v={1,4,7,18,101};
    display(vec);
    display(v);

    Merge(vec,v);
    sortvec(v);

    display(v);
    cout<<endl;
    return 0;
}