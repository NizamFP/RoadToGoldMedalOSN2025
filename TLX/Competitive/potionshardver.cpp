#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back
 
void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i<n; i++) {
        cin >> a[i];
    }
    priority_queue<int, vector<int>, greater<int>> aa;
    ll value;
    value = 0;
    for (int i = 0; i<n; i++) {
        value = value + a[i];
        aa.push(a[i]);
        if (value<0) {
            value = value - aa.top();
            aa.pop();
        }
    }
    cout << aa.size();    
    
 
    
}
 
int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}