#include<iostream>
using namespace std;
int main(){
    int arr[] = {23,2,4,423,32,2,4,53,43,52,3,5,32,53,2,32,23,52,352,3,3535,235,2,35,45,3,24,5,25,52,352,35,253,53,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;

    for (int i = 0 ; i < size ; i++){
        count = count + arr[i];
        
    }

    cout<<"Sum = "<<count;
    return 0;
}

//CAn also form user defined array and print sum.