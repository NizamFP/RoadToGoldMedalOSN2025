#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
   ll N, B, jumlah = 0, index = 0;
   cin >> N >> B;
   vector<ll> H;
   for (int i = 0; i<N; i++) {
    ll input;
    cin >> input;
    H.pb(input);
   }
   sort(H.begin(), H.end(), greater<>());
   while (jumlah <B) {

    jumlah = jumlah + H[index];
    index++;
   }
   cout << index;
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}