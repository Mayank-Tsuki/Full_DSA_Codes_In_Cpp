#include<iostream>
using namespace std;

//if cost price and selling price of an item is input throgh the keyboard,write a program to determine
//whether the seller has made profit or incurred loss.also determine how much profit he made or loss he
//incurred.

int main(){
    int sellingPrize ,costPrize;
    cout<< "Enter the cost prize: ";cin>> costPrize;
    cout<< "Enter the selling prize: ";cin>> sellingPrize;

    if (costPrize < sellingPrize){
        cout<<"Your make profit! and the profit is :"<<(sellingPrize-costPrize);
    }
    else if(costPrize == sellingPrize){
        cout<<"There is no profit or loss!";
    }
    else {
        cout<< "Your make loss! and the loss is "<< (costPrize-sellingPrize);
    }
    return 0;
}