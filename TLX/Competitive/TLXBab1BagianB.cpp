#include <iostream>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    int matriks[n][m];
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cin >> matriks[i][j];
        }
    }
    string operations[x];
    for (int i = 0; i<x; i++) {
        cin >> operations[i];
    }
    for (const string&op : operations) {
        if (op == "_") {
            reverse(matriks.begin(), matriks.end());
        }
    }
}

