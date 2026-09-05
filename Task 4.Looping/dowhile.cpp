#include<iostream>
using namespace std;
int main(){
    int a=1;

//Same as while looping but a little complex so it is also uselessi my opinion. 

    do{
        cout<< 19 * a << endl;
        a+=1;
    }while (a <= 10);
    cout<<endl;
    //Note it will always produce an output as in do condition there is 
    //...a print statement at the beginning
    
    //example

    int i=11;            //i is 11 but the condition in this loop in while 
                        //..i<10! ,so this will always show a result.
    do{
        cout<< i <<endl;
        i++;
    }while(i<10);

    return 0;
}

