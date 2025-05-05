#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

const int N = 1e5+7;
int p[N], sz[N];

int par(int x) {
    if  (p[x] == x){
        return x;
    }
    else {
        return par(p[x]);
    }
}

void join(int x, int y) {
    x = par(x);
    y = par(y);
    if (x != y) {
        if (sz[y] > sz[x]) {
            swap(x, y);
        }
        p[y] = x;
        sz[x] += sz[y];
    }
}

int main() {
   int n, m, q;
   cin >> n >> q;
   for (int i = 0; i<n; i++) {
        p[i] = i;
        sz[i] = 1;
   }
   for (int i = 0; i<q; i++) {
    int a, b, operasi;
    cin >> operasi >> a >> b;
    if (operasi == 1) {
        join(a, b);
    }
    else {
        if (par(a) == par(b)) {
            cout << "Y" << endl;
        }
        else {
            cout << "T" << endl;
        }

    }

   }
}