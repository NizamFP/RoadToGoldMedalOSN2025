#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
    int normal, basis;
    cin >> normal >> basis;
    vi angka;
    while (normal != 0) {
        angka.pb(normal % basis);
        normal = floor(normal / basis);
    } 
    reverse(angka.begin(), angka.end());
    for (int i = 0; i<angka.size(); i++) {
        cout << angka[i];
    }
   
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
}