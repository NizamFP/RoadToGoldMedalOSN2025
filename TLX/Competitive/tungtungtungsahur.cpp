#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back



void solve() {
    int t;
    cin >> t;
    for (int i = 0; i<t; i++) {
        string p, s;
        int count = 0;
        vi pukul, dengar;
        cin >> p >> s;
        int j = 0;
        char lr = p[0];
        while (p[j]) {
            if (p[j] == lr) {
                count++;
            }
            else {
                pukul.pb(count);
                count = 1;
                lr = p[j];
            }
            j++;
        }      
        pukul.pb(count);
        j = 0;
        count = 0;
        lr = s[ 0];
        while (s[j]) {
            if (s[j] == lr) {
                count++;
            }
            else {
                dengar.pb(count);
                count = 1;
                lr = s[j];
            }
            j++;
        }      
        dengar.pb(count);
        bool status = false;
        

        if (p[0] != s[0] || pukul.size() != dengar.size()) {
            status = false;
        }
        else {
            for (int j = 0; j < pukul.size(); j++) {
                if (dengar[j]>=pukul[j] && dengar[j]<=2*pukul[j]) {
                    status = true;
                }
                else {
                    status = false;
                    break;
                }
            }
        }
        if (status == true) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}