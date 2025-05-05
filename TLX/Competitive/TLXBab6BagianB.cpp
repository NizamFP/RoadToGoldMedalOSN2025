#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
   int n;
   cin >> n;
   int x[n+1], y[n+1];
   ll jumlah = 0;
   for (int i = 0; i<n; i++) {
      cin >> x[i];
   }
   for (int i = 0; i<n; i++) {
      cin >> y[i];
   }
   sort (x, x+n);
   sort (y, y+n);
   for (int i = 0; i<n; i++) {
      ll perkalian;
      jumlah += x[i]*y[n-i-1];
   }
   cout << jumlah << endl;


   
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}



