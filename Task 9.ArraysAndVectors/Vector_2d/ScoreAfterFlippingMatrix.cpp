#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int> > grid;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(1);
    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(1);
    v2.push_back(0);
    v3.push_back(1);
    v3.push_back(1);
    v3.push_back(0);
    v3.push_back(0);
    grid.push_back(v1);
    grid.push_back(v2);
    grid.push_back(v3);

    int row = grid.size();
    int col = grid[0].size();

    //Rows to all 1
    for(int i = 0 ; i < row ; i++){
        if(grid[i][0] == 0){
            for(int j = 0 ; j < col ; j++){ //flipping rows
                if (grid[i][j] == 0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }
    //columns to max 1

    for(int j = 0 ;j < col ; j ++){
        int noz = 0;
        int noo = 0;
        for(int i = 0 ; i < row ; i ++){
            if ( grid[i][j] == 0) noz += 1;
            else noo += 1;
        }
        if ( noz > noo){ //flipping columns
            for(int i = 0 ; i < row ; i++){
                if (grid[i][j] == 0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }
    int sum = 0 ; 
    for(int i = 0 ; i < row ; i++){
        int x = 1;
        for(int j = col - 1 ; j >= 0 ; j--){
            sum += grid[i][j] * x;
            x *= 2;
        }
    }
    cout<<sum;
    return 0;
}