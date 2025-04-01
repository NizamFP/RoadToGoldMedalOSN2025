#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long jumlah;
    cin >> N;
    int A[N];
    int B[N];
    jumlah = 0;
    for (int i = 0; i<N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i<N; i++) {
        cin >> B[i];
    }
    for (int i = 0; i<N; i++) {
        jumlah = jumlah + pow(A[i], B[i]);
    }
    if (jumlah % 2 == 0) {
        cout << 0;
    }
    else {
        cout << 1;
    }
}