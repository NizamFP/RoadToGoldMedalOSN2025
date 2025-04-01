#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    int N[Q];
    int divisor[Q];
    for (int i = 0; i<Q; i++) {
        cin >> N[i];
        divisor[i] = 0;
        for (int j = 1; j<=sqrt(N[i]); j++) {
            if (N[i] % j == 0) {
                divisor[i]++;
            } 
            else {
                divisor[i] = divisor[i];
            }
        }
        if (divisor[i]>1 || N[i] == 1) {
            cout << "BUKAN" << "\n";
        }
        else {
            cout<< "YA" << "\n";
        }
    }
}