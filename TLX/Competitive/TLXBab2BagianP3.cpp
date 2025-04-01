#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
#define pair<int, int> pii;
#define pb push_back

void solve() {
   ll B, K, selisih, tes;
   cin >> B >> K;
   selisih = K-B;
   while (selisih >=1) {
        ll pengurang = 0;
        pengurang = pow(2, (floor(log(selisih)/log(2))));
        selisih = selisih-pengurang;
        cout << pengurang << "\n";  
    }  
} 

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
}