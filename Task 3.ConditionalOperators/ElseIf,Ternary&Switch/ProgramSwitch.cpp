#include<iostream>
using namespace std;

//write a program to input month number ...
//...and print number of the days in month using switch case
int main(){
    int month;
    cout<<"Enter the month number: ";cin>>month;

    switch(month){
        case 1: //jan
            cout<<"31";
            break;
        case 2: //feb
            cout<<28;
            break;
        case 3: //march
            cout<<"31";
            break;
        case 4: //april
            cout<<30;
            break;
        case 5: //may
            cout<<"31";
            break;
        case 6: //june
            cout<<30;
            break;
        case 7: //july
            cout<<"31";
            break;
        case 8: //aug
            cout<<"31";
            break;
        case 9: //sept
            cout<<30;
            break;
        case 10: //oct
            cout<<"31";
            break;
        case 11: //nov
            cout<<30;
            break;
        case 12: //dec
            cout<<"31";
            break;
        default :
            cout<<"dont make fool of us there is no such month number!";
    }
    return 0;
}