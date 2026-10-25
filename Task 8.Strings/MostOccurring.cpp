#include<iostream>
using namespace std;
//Given a string of lowercase eng alphabet.Print the character which is most occurring.
int main(){
    string s ="aabbccdd";

    //Count how many times max occurring alphabet occurs
    
    int max = 0;
    for(int i = 0 ; i < s.length() ; i++){
        char ch = s[i];
        int count = 1;
        for( int j = i+1 ; j < s.length() ; j++){
            if(s[j] == ch) count++;
        }
        if (max < count) max = count;
    }

    //Printing the alphabet which occurs maximum
    for(int i = 0 ; i < s.length() ; i++){
        char ch = s[i];
        int count = 1;
        for(int j = i +1 ; j< s.length() ; j++){
            if(s[i]==ch) count++;
        }
        if(count == max) cout<< max <<"  "<< ch <<endl;;
    }
    return 0;
}