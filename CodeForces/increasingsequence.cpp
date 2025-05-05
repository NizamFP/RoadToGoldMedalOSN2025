#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
    int n;
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin >> n;
    int angka[n];
    fin >> angka[0];
    bool status = true;
    for (int i = 1; i<n; i++) {
        fin >> angka[i];
        if (angka[i]> angka[i-1]) {
            continue;
        }
        else {
            status = false;
            break;
        }
    }
    fin.close();
    if (status) {
        fout << "Yes";
    } else {
        fout << "No";
    }
    
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}