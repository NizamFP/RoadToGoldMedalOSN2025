#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

bool overmil;

ll operasipangkat(ll angka, ll pangkat) {
    if (pangkat == 1) {
        return angka;
    }
    else {
        if (pangkat % 2 == 0) {
            angka = (operasipangkat(angka, pangkat/2)*operasipangkat(angka, pangkat/2));
            if (angka > 1000000) {
                overmil = true;
            }
            return angka = angka % 1000000;
        }
        else{
            angka = (angka*(operasipangkat(angka, pangkat-1)));
            if (angka > 1000000) {
                overmil = true;
            }
            return angka = angka % 1000000;
        }
    }
}



void solve() {
    overmil = false;
    ll A, B;
    cin >> A >> B;
    if (overmil) {
        cout << setw(6) << setfill('0') << operasipangkat(A, B);
    }
    else {
        cout << operasipangkat(A, B);
    }
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}