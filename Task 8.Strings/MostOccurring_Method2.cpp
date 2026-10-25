#include<iostream>
#include<vector>
using namespace std;
//Given a string of lowercase eng alphabet.Print the character which is most occurring.
int main(){
    string s = "raghav";
    vector<int> ch(26,0);

    int max = 0 ;
    char c;
    for(int i = 0 ; i < s.length() ; i++){
        int n = int(s[i]);
        ch[n-97] += 1;
    }
    for(int i = 0 ; i < 26 ; i++){
        if ( ch[i] > max){
            max = ch[i] ;
            c  = char(97+i) ;
        }
    }
    cout<< c << "  " << max;
    return 0;
}