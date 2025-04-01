#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long A[N];
    long long sum = 0;
    for (int i = 0; i<N; i++) {
        cin >> A[i];
        sum = sum + A[i];
    }
    for (int i = 0; i<N; i++) {
        cout << sum-A[i] << "\n";
    }
}