#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
    ll N, Q;
    cin >> N;
    int indexawal = 0, indexakhir = N-1, hasil, indexmemenuhimin = -1, indexmemenuhimax = -1; //potential error dari indexakhir = n
    bool found = false;
    vi A;
    for (int i = 0; i<N; i++) {
        ll input;
        cin >> input;
        A.pb(input);
    }
    cin >> Q;
    vi min;
    vi max;
    for (int i = 0; i<Q; i++) {
        int batasbawah, batasatas;
        cin >> batasbawah >> batasatas;
        cout << (upper_bound(A.begin(), A.end(), batasatas) - A.begin()) - (upper_bound(A.begin(), A.end(), batasbawah)-A.begin()) << "\n";
    }
    
   
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}