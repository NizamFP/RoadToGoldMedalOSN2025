#include <bits/stdc++.h>
using namespace std;

int sumtillzero(int input) {
    if (input == 0) {
        return 0;
    }
    else {
        return input + sumtillzero(input -1);
    }
}

int main() {
    int N, count = 0;
    cin >> N;
    for (int x = 0; x<N; x++) {
        for (int i = 0; i<=x; i++) {
            cout << (i+sumtillzero(x)) % 10;
        }  
        cout << "\n";      
    }
}