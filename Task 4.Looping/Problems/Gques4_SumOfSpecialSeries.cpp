// Print the sum of the series 1-2+3-4+5-6+7...upto n terms.

#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<< "Enter the number: ";cin>> n;
    
    for (int i=1 ; i<=n ; i++){
        if ( i % 2 == 0){
            sum = sum - i;
        }
        else{
            sum = sum + i;
        }
    }
    cout<<"The result of the series is "<<sum;
    
    //method 2

//Note: if n=even -> (1-2)+(2-4)+(5-6)+.....+((n-1)-n)
//                    -1     -1    -1  .......    -1  =[-n/2]

//If n=odd  ->  ex=7  , (1-2)+(3-4)+(5-6)+ 7
//                         [-(n/2) + 7]

    if(n%2==0){
        sum = -n/2;
    }
    else{
        sum = -n/2 + n;
    }
    cout<<sum;

}