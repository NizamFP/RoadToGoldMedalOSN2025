#include <bits/stdc++.h>
using namespace std;

int  main() {
    int T;
    cin >> T;
    int N[T];
    int faktor[T];
    for (int i = 0; i<T; i++) {
        cin >> N[i];
    }
    for (int i = 0; i<T; i++) {
        faktor[i] = 0;
        for (int j = 1; j<sqrt(N[i]); j++) {
            if (N[i] % j == 0) {
                faktor[i]++;
                
            }
            else {
                faktor[i] = faktor[i];
            }
        }
        if (N[i] / floor(sqrt(N[i])) == N[i] / sqrt(N[i])) {
            faktor[i] = faktor[i]*2+1;
        }
        else {
            faktor[i] = faktor[i]*2;
        }
    }
    for (int i = 0; i<T; i++) {
        if (faktor[i] <=4) {
            cout << "YA";
        }
        else {
            cout << "BUKAN";
        }
        cout << "\n";
    }
}