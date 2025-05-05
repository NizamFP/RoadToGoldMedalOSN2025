#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
    int M, N, B, K, terpilih;
    cin >> M >> N;
    int papan[M][N];
   for (int i = 0; i<M; i++) {
    for (int j = 0; j<N; j++) {
        cin >> papan[i][j];
    }
   }
   cin >> B >> K;
   terpilih = papan[B][K];
   cout << terpilih;
   
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}