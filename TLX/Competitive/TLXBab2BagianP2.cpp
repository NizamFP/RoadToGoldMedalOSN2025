#include <bits/stdc++.h>
#include <numeric> // For lcm function
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

int euclid(int a, int b) {
    if (b==0) {
        return a;
    }
    else {
        return euclid(b, a % b);
    }
}

int lcm(int a, int b) {
    return (a*b)/euclid(a, b);
}
void solve() {
   int N;
   cin >> N;
   
   vi D;
   for (int i = 0; i<N; i++) {
    int input;
    cin >> input;
    D.pb(input);
   }
   ll result = D[0];
   for (int i = 1; i<N; i++) {
    result = lcm(result, D[i]);
   }
   cout << result;
   
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}