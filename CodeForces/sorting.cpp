#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int n;
    fin >> n;
    int angka[n];
    for (int i = 0; i<n; i++) {
        fin >> angka[i];
    }
    sort(angka, angka+n);
    for (int i = 0; i<n; i++) {
        fout << angka[i] << " " ;
    }
    
    
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}