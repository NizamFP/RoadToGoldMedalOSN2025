#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    int sum = 0;
    for (int i = 0; i<N; i++) {
        cin >> A[i];
        sum = sum + A[i];
    }
    for (int i = 0; i<N; i++) {
        cout << sum-A[i] << "\n";
    }
}