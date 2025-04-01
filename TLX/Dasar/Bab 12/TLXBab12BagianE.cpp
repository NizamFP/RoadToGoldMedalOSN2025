#include <bits/stdc++.h>
using namespace std;

int banyakpasangan(int totalmember) {
    return totalmember*(totalmember-1)/2;
}

int main() {
    int N, D;
    cin >> N >> D;
    int X[N];
    int Y[N];
    vector<int> kedekatan;
    for (int i = 0; i< N; i++) {
        cin >> X[i] >> Y[i];
    }
    for (int i = 0; i<N; i++) {
        for (int j = i+1; j<N; j++) {
            int deket = pow(abs(X[j]-X[i]), D) + pow(abs(Y[j]-Y[i]), D);
            kedekatan.push_back(deket);
        }
    }
    sort(kedekatan.begin(), kedekatan.end());
    cout << kedekatan.front() << " " << kedekatan.back();
}