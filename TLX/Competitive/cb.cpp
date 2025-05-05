#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back
#define fi first
#define se second

const int N = 1e5+7;
const int INF = 1e15;
int dist[N];
vector<pii> adj[N];

int dijkstra (int a, int b) {
    
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, a});
    dist[a] = 0;
    while (!pq.empty()) {
        int curw = pq.top().fi;
        int cur = pq.top().se;
        pq.pop();
        if(curw != dist[cur]) continue;
        for (auto i : adj[cur]) {
            
            if (dist[i.fi]>(curw+i.se)) {
                dist[i.fi] = curw+i.se; 
                pq.push({dist[i.fi], i.fi});
            }
        }
    }
    return dist[b];
}

void solve() {
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    for (int i = 1; i<=n; i++) {
        dist[i] = INF;        
    }
    for (int i = 0; i<m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].pb({v, w});
        adj[v].pb({u, w});
    }
    cout << dijkstra(p, q);
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}