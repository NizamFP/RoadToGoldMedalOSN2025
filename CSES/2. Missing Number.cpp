#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int list[n-1];
    for (int i = 0; i<n-1; i++) {
        cin >> list[i];
    }
    sort(list, list + n-1);
    for (int i = 0; i<n; i++) {
        if (list[i] == i+1) {
            continue;
        }
        else {
            cout << i+1;
            return 0;
        }
    }
}