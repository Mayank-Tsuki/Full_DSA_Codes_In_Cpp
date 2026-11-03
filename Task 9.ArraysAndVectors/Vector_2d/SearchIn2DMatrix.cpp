#include<iostream>
#include<vector>
using namespace std;

//write an efficient way to search a n * m matrix and search a target value.
//note1: integers in a row are sorted.
//note2. integers in a column are sorted.
// 1   3   7   11  15 
// 2   5   8   12  19
// 3   6   9   16  22
// 10  13  14  17  24
// 18  21  23  26  30
//target = 5  -> cout true

int main(){
    vector<vector<int> > grid;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    v3.push_back(11);
    v3.push_back(12);
    grid.push_back(v1);
    grid.push_back(v2);
    grid.push_back(v3);

    int row = grid.size();
    int col = grid[0].size();
    int i = 0 , j = col-1;

    int target;
    cout<<"Enter the target:";cin>>target;
    bool flag = false;

    while(i <= row-1 && j >= 0){
        if( grid[i][j] == target){
            flag = true;
            break;
        }
        else if(grid[i][j] > target) j--;
        else i++;
    }
    cout<<flag;
}