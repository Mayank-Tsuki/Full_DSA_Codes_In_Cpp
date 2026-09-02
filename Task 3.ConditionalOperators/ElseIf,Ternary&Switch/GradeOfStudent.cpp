#include<iostream>
using namespace std;
int main(){
    int percentage;
    cout << "Enter your percentage: ";cin >> percentage;

    if ((percentage>=91) && (percentage<=100)){
        cout<<"Excellent!";
    }
    else if((percentage>=81)&&(percentage<=90)){
        cout<<"Very Good!";
    }
    else if((percentage>=71)&&(percentage<=80)){
        cout<<"Good!";
    }
    else if((percentage>=61)&&(percentage<=70)){
        cout<<"can do better!";
    }
    else if((percentage>=51)&&(percentage<=60)){
        cout<<"Average!";
    }
    else if((percentage>=41)&&(percentage<=50)){
        cout<<"Below average!";
    }
    else{
        cout<<"Fail!!";
    }
    return 0;

}