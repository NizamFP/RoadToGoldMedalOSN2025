#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back


const int N = 10e5+7;
vector<int> adj[N];
bool vis[N];

void dfs(int s) {
    if (vis[s] == true) {
        return;
    }
    for (auto u : adj[s]) {
        dfs(u);
    }
}


void solve() {
    int N, M;
    cin >> N >> M;
    vector<int> adj[N+1];
    for (int i = 0; i<M; i++) {
        int adj1, adj2;
        cin >> adj1 >> adj2;
        adj[adj1].pb(adj2);
        adj[adj2].pb(adj1); 
    }
    for (int i = 0; i<N; i++) {
        
    }

}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}