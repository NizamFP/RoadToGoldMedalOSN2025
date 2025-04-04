#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
   string A, B;
   cin >> A >> B;
   for (int i = 0; i<A.length(); i++) {
        string deletedone = A;
        deletedone.erase(i, 1);
        if (deletedone == B) {
            cout << "Tentu saja bisa!";
            break;
            
        }
        else if (i == A.length() - 1) {
            cout << "Wah, tidak bisa :(";
        }
        
   }
   
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}