#include <bits/stdc++.h>
using namespace std;

long long faktorial(int angka) {
    if (angka <= 1) {
        return 1;
    }
    else {
        return angka*faktorial(angka-1);
    }
}
int main() {
    long long N, A, B;
    long long hasil = 0;
    long long m = 1000000007;
    cin >> N >> A >> B;
    for (int i = A; i<=B; i++) {
        hasil = ((hasil % m) + ((faktorial(N)/(faktorial(N-i)*faktorial(i))) % m)) % m;
    }
    cout << hasil;
}