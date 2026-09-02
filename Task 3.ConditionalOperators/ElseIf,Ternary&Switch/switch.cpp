#include<iostream>
using namespace std;

//write a program to input week number(1-7) and print day pf week
//name using qwitch case

int main(){
    int num;
    cout<<"Enter name of the week: ";cin>>num;

    switch(num){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"wednesday";
            break;
        case 4:
            cout<<"thrusday";
            break;
        case 5:
            cout<<"friday";
            break;
        case 6:
            cout<<"saturday";
            break;
        case 7:
            cout<<"sunday";
            break;
        default :
            cout<<"invalid number";
    }
    return 0;

}