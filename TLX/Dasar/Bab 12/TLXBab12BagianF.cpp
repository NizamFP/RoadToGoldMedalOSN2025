#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    while (S.find(T) != S.npos) {
        int index = S.find(T);
        S.erase(index, T.length());
    }
    cout << S;
}