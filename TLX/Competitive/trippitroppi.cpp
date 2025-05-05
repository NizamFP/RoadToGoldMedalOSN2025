#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
    int t;
    cin >> t;
    for (int i = 0; i<t; i++) {
        for (int j = 0; j<3; j++) {
            string kata;
            cin >> kata;
            cout << kata[0];
        }
        cout << endl;
    }
    
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}