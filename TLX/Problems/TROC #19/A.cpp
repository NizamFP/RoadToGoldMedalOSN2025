#include <bits/stdc++.h>
using namespace std;

int main() {
    int P, Q;
    cin >> P >> Q;
    if ((P*P+Q*Q+1) % 4 == 0) {
        cout << (P*P+Q*Q+1) /4;
    }
    else {
        cout << -1;
    }
}