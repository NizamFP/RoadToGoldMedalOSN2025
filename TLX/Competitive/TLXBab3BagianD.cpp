#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
   ll n, perubahan = 0;
   vi angka;
   cin >> n;
   for (int i = 0; i<n; i++) {
      ll input;
      cin >> input;
      angka.pb(input);
   }
   for (int i = 0; i<n; i++) {
      for (int j = i+1; j<n; j++) {
         if (angka[i]>angka[j]) {
            int sementara;
            sementara = angka[i];
            angka[i] = angka[j];
            angka[i] = sementara;
            perubahan++;
         }
         else {
         }
      }
      
   }
   cout << perubahan;
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}