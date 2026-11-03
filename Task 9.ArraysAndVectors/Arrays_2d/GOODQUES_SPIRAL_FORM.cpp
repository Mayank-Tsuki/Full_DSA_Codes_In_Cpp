//Write a program to print matrix in the spiral form.
// 1 2 3
// 4 5 6
// 7 8 9
// print = 1 2 3 6 9 8 7 4 5

#include<iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    int arr[m][n];
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;
    int count = 0;
    int tne = n*m;

    cout << "Spiral order: ";

    while (minr <= maxr && minc <= maxc) {

        // → Right
        for (int j = minc; j <= maxc && count < tne ; j++){
            cout << arr[minr][j] << " ";
            count++;
        }
        minr++;

        // ↓ Down
        for (int i = minr; i <= maxr && count < tne ; i++){
            cout << arr[i][maxc] << " ";
            count++;
        }
        maxc--;

        // ← Left

        for (int j = maxc; j >= minc && count < tne ; j--){
            cout << arr[maxr][j] << " ";
            count++;
        }
        maxr--;

        // ↑ Up

        for (int i = maxr; i >= minr && count < tne ; i--){
            cout << arr[i][minc] << " ";
            count++;
        }
        minc++;

    }

    return 0;
}




