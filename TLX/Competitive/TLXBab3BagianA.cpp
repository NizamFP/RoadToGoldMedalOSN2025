#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
   ll N, X, minindex = 0;
   cin >> N >> X;
   ll min = X;
   vi A;
   for (int i = 0; i<N; i++) {
        int input;
        cin >> input;
        A.pb(input);
        if (abs(A[i] - X) < min) {
            min = abs(A[i] - X);
            minindex = i;
        }
        else if (abs(A[i] - X) ==  min) {
            if (A[i] <A[minindex]) {
                minindex = i;
            }
            else {

            }
        }
        else {

        }
   }
   cout << A[minindex];
   
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}