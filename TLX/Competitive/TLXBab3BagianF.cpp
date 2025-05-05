#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back



void solve() {
    int N, Q;
    cin >> N;
    vi angka;
    vi demand;
    vi cumulative;
    for (int i = 0; i<N; i++) {
        int input;
        cin >> input;
        if (i == 0) {
            angka.pb(input);
        }
        else {
            angka.pb(angka[i-1] + input);
        }
   }
    cin >> Q;
    for (int i = 0; i<Q; i++) {
        int tes;
        cin >> tes;
        cout << lower_bound(angka.begin(), angka.end(), tes) - angka.begin()+1 << "\n";
   }
   

}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}