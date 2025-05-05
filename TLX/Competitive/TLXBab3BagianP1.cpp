#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
    ll N, K;
    cin >> N >> K;
    vi patok;
    vi diminta;
    vi kumulatif;
    for (int i = 0; i<N; i++) {
        int input;
        cin >> input;
        patok.pb(input);
        if (i == 0) {
            kumulatif.pb(input);
        }
        else {
            kumulatif.pb(kumulatif[i-1]+input);
        }
    }    
    for (int i = 0; i<K; i++) {
        int input;
        cin >> input;
        cout << (upper_bound(kumulatif.begin(), kumulatif.end(), input) - kumulatif.begin()) << "\n";
    }
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}
