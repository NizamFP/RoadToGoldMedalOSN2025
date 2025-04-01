#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
   ll N;
   cin >> N;
   vector<double> angka;
   for (int i = 0; i<N; i++) {
    double yes;
    cin >> yes;
    angka.pb(yes);
   }
   sort(angka.begin(), angka.end());
   if (N % 2 == 0) {
    printf("%0.1f", (angka[(N/2)-1] + angka[(N/2)])/2);
   }
   else {
    printf("%0.1f", (angka[N/2]));
   }
   
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
}