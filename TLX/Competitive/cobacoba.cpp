#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {

    vector<tuple<int, string, int>> tp;
    tp.pb({15, "oktober", 2008});
    tp.pb({25, "april", 2009});
    tp.pb({26, "april", 2009});
    for (int i = 0; i<tp.size(); i++) {
        auto [tanggal, bulan, tahun] = tp[i];
        cout << tanggal << " " << bulan << " " << tahun << endl;
    }
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}