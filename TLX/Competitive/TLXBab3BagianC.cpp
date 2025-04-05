#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back
bool sortbylength(const pair<string, int> &a, const pair<string, int> &b) {
    if (a.second != b.second) {
        return a.second<b.second;
    } 
    else {
        return a.first<b.first;
    }
}
void solve() {
    int n;
    cin >> n;
    vector<pair<string, int>> namapanjang;
    for (int i = 0; i<n; i++) {
        string input;
        int length;
        cin >> input;
        length = input.size();
        namapanjang.pb(make_pair(input, length));
    }
    sort(namapanjang.begin(), namapanjang.end(), sortbylength);
    for (int i = 0; i<n; i++) {
        cout << namapanjang[i].first << "\n";
    }
   
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}