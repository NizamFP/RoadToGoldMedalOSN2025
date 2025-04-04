#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
    ll N, Q;
    cin >> N;
    int indexawal = 0, indexakhir = N-1, hasil, indexmemenuhimin = -1, indexmemenuhimax = -1; //potential error dari indexakhir = n
    bool found = false;
    vi A;
    for (int i = 0; i<N; i++) {
        ll input;
        cin >> input;
        A.pb(input);
    }
    cin >> Q;
    vi min;
    vi max;
    for (int i = 0; i<Q; i++) {
        ll inputx, inputy;
        cin >> inputx >> inputy;
        min.pb(inputx);
        max.pb(inputy);
    
        while (indexawal <= indexakhir && found == false) {
            int mid = (indexawal+indexakhir)/2;
            if (A[mid] >= min[i]) {
                indexmemenuhimin = mid;
                indexakhir = mid - 1; //potential error lagi
            }   
            else {
                indexawal = mid+1;
            }
            
        }
        found = false;
        indexawal = 0;
        indexakhir = N-1;
        indexmemenuhimin = -1;
        indexmemenuhimax = -1;
        while (indexawal <= indexakhir && found == false) {
            int mid = (indexawal+indexakhir)/2;
            if (A[mid] <= max[i]) {
                indexmemenuhimax = mid;
                indexawal = mid + 1;//potential error lagi
            }
            else {
                indexakhir = mid-1;
            }
            
        }
        cout << indexmemenuhimax-indexmemenuhimin +1 << "\n" ; 
    }
    
   
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}