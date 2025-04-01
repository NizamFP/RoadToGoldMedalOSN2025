#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
    int n;
    cin >> n;
    vector<pair <string, int>> nama_panjang;
    for (int i = 0; i<n; i++) {
        string input;
        cin >> input;
        nama_panjang.push_back({input, input.length()});
    }
   
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}