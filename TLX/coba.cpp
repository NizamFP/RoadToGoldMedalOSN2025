#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back
 

vi adj[5];
bool visited[5];

void dfs(int s) {
    if (visited[s] == true) {
        return;
    }
    for (auto u : adj[s]) {
        dfs(u);
    }
}

void solve() {
    
    
    
}
 
int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}