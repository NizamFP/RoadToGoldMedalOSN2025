#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

const ll mod = 1e9+7;



void solve() {
    int n, a, b; cin >> n >> a >> b;
    ll combin[n+1][n+1];
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            if (j==0 || j ==i) {
                combin[i][j] = 1;
            }
            else {
                combin[i][j] = combin[i-1][j]+combin[i-1][j-1];
            }
        }
    }
    cout << combin[4][2];
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}


// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1


