#include<iostream>
using namespace std;
int main(){
    int i;
    while ( i=10 ){          //infinite loop banege as [=] assignment...
        cout<<i<<endl;       //..operator is used not comparision[==]
        i++;
    }
    return 0;
}