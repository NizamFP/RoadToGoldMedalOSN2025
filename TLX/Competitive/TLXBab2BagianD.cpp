#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D;
    long long pembilang, penyebut;
    cin >> A >> B >> C >> D;
    
    penyebut = B*D;
    pembilang = A*D+C*B;
    long long fpb = gcd(pembilang, penyebut);
    pembilang = pembilang / fpb;
    penyebut = penyebut / fpb;
    cout << pembilang << " " << penyebut;
}
