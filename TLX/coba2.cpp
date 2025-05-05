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
        vi banyakpukul, banyakdengar;
        bool status = true;
        string pukul, dengar;
        int count = 0;
        cin >> pukul >> dengar;
        for (int i = 0; i<pukul.length(); i++) {
            if (i+1<pukul.length() && ((pukul[i] == 'L' && pukul[i+1] == 'L') || (pukul[i] == 'R' && pukul[i+1] == 'R'))) {
                count++;
            }
            else if (pukul[i] == 'L' || pukul[i] == 'R'){
                banyakpukul.pb(count+1);
                
                count = 0;
            } 
        }
        
        count = 0;
        for (int i = 0; i<dengar.length(); i++) {
            if (i+1<dengar.length() && ((dengar[i] == 'L' && dengar[i+1] == 'L') || (dengar[i] == 'R' && dengar[i+1] == 'R'))) {
                count++;
            }
            else if (dengar[i] == 'L' || dengar[i] == 'R'){
                banyakdengar.pb(count+1);
                count = 0;
            } 
        }
        for (int i = 0; i < banyakdengar.size(); i++) {
            if (i>banyakpukul.size()) {
                status = false;
                break;
            }
            if (pukul[0] != dengar[0]) {
                status = false;
                break;
            }
            else if (banyakpukul[i]<banyakdengar[i] + 1 && banyakdengar[i] < 2*banyakpukul[i]+1) {
                status = true;
            }
            else
                {
                status = false; 
                break;
            }
        }
        for (int i = 0; i<banyakpukul.size(); i++) {
            if(status == false) {
                break;
            }
            else if (pukul[0] != dengar[0]) {
                status = false;
                break;
            }
            else if (banyakpukul[i]<banyakdengar[i]+1 && banyakdengar[i]<2*banyakpukul[i]+1) {
                status = true;
            }
            else
                {
                status = false; 
                break;
            }
        }
        if (status == true) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        // for (int i = 0; i<banyakpukul.size(); i++) {
        //     cout << banyakpukul[i];
        // }
        // cout << endl;
        // for (int i = 0; i<banyakdengar.size(); i++) {
        //     cout << banyakdengar[i];
        // }
        
    }
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}