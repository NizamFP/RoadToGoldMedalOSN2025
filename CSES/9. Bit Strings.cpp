#include <bits/stdc++.h>
using namespace std;

void modularexponentiation(long long exponent) {
    long long mod = 1000000007;
    long long result = 1;
    for (int i = 0; i < exponent; i++) {
        result = (2 *result % mod);
    }
    cout << result;
    
}

int main() {
    long long exponent;
    cin >> exponent;
    modularexponentiation(exponent);
    
    
}