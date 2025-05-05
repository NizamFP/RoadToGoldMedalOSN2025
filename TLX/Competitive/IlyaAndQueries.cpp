#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
    string s;
    ll m;
    cin >> s >> m;
    ll n = s.length();
    vector<ll> prefix(n, 0);
    for (int i = 1; i<n; i++) {
        if (s[i] == s[i-1]) {
            prefix[i] = prefix[i-1]+1;
        }
        // else if (i+1 == n) {
        //     prefix[i] = prefix[i-1]+1;
        // }
        else {
            if (prefix[i-1]) {
                prefix[i] = prefix[i-1];
            }
            else {
                prefix[i] = 0;
            }
        }
    }   

    for (int i = 0; i<m; i++) {
        ll l, r;
        cin >> l >> r;

        r=r-1;
        l=l-1;
        cout << prefix[r] - prefix[l] << endl;


    }
    
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}