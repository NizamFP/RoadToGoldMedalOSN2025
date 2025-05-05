#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

ll const N = 1e5+7;
void solve() {
    int n;
    int a[N];
    cin >> n;
    for (int i = 0; i<N; i++) {
        a[i] = -1;
    }
    for (int i = 0; i<n; i++) {
        int angka;
        cin >> angka;
        a[angka] = 1;
    }
    
    
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}