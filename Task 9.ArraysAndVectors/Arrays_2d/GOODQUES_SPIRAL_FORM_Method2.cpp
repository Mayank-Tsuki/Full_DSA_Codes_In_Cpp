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

    cout << "Spiral order: ";

    while (minr <= maxr && minc <= maxc) {

        // → Right
        for (int j = minc; j <= maxc; j++)
            cout << arr[minr][j] << " ";
        minr++;
        if(minr > maxr || minc > maxc) break;

        // ↓ Down
        for (int i = minr; i <= maxr; i++)
            cout << arr[i][maxc] << " ";
        maxc--;
        if(minr > maxr || minc > maxc) break;

        // ← Left

        for (int j = maxc; j >= minc; j--)
            cout << arr[maxr][j] << " ";
        maxr--;
        if(minr > maxr || minc > maxc) break;


        // ↑ Up

        for (int i = maxr; i >= minr; i--)
            cout << arr[i][minc] << " ";
        minc++;
        if(minr > maxr || minc > maxc) break;

    }

    return 0;
}
