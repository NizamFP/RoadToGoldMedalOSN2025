#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

// void solve() {
//     int n = 6;
//     int dp[n];
//     for (int i = 0; i<n; i++) {
//         if (i == 0 && i == 1) {
//             dp[i] = 1   
//         }
//     }
    
// }

const ll MOD = 1e9+7;
const ll N = 1e6+7;
ll memo[N];
ll n, x;
vector<ll> uang;
ll dp(ll x) {
    if (x<0) return 0;
    if (x==0) return 1;
    if(memo[x]!= -1) return memo[x];
    memo[x] = 0;
    for (auto i : uang) {
        memo[x] += dp(x-i);
        memo[x] %= MOD;
    }
    return memo[x];
}

void solve() {
    cin >> n >> x;
    fill (memo, memo+N, -1);
    for (int i = 0; i<n; i++) {
        ll value;
        cin >> value;
        uang.pb(value);
    }
    cout << dp(x);
    
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
   return 0;
}