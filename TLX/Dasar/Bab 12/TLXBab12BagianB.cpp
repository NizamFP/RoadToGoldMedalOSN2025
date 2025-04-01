#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, x, K;
    cin >> A >> B >> K >> x;
    for (int i = 0; i<K; i++) {
        x = abs(A*x + B);
    }
    cout << x;
}