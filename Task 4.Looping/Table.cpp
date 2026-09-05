#include <iostream>
using namespace std;

//Print Table of 19

int main(){
    for (int i=1 ; i<=10 ; i++){
        cout<< 19 * i <<endl ;
    }

    //2d method
    for (int i=19 ; i<=190 ; i+=19){
        cout<< i <<endl ;
    }
    return 0;
}