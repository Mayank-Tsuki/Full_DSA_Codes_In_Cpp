#include<iostream>
#include<vector>
using namespace std;

//Find the last occurance of a user given number n.

//Now we will always remember in mind about time/space complexicity

int main(){
            //Array
    int n , arr[] = {12,3,4,9,2,5,9,23,2,3,5,2,35,6,2,5,23,3,5,23,5,235,9,65,7};
    cout<<"Enter n :";  cin>>n;
    int size = sizeof(arr)/4 , lstindex=0;

    for( int i= size-1 ; i>=0 ; i--){    //space complexicity reduced
        if (arr[i] == n){
            lstindex=i;
            break;
        }
    }
    cout<<"The last indexing of "<<n<<" is "<<lstindex;
    cout<<endl;
    cout<<endl;

            //By Vectors

    vector<int>v;
    v.push_back(12);
    v.push_back(23);
    v.push_back(9);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(9);
    v.push_back(6);
    for( int i= v.size() ; i>=0 ; i--){    //space complexicity reduced
        if (arr[i] == n){
            lstindex=i;
            break;
        }
    }
    cout<<"The last indexing of "<<n<<" is "<<lstindex;
    cout<<endl;

    return 0;
}