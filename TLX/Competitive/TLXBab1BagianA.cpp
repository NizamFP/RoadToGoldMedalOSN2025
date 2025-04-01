#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int matriks[m][n];
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cin >> matriks[i][j];
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cout << matriks[m-j-1][i] << " ";
        }
        cout << endl;
    }
}