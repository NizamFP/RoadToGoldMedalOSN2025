#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

const int maxn = 9999990;
vector <bool> isprime(maxn+1, true);
vector<int> primes;

void sieveoferathosthenes () {
    isprime[0] = isprime[1] = false;
    for (int i = 2; i*i<=maxn; i++) {
        if (isprime[i] == true) {
            for (int j = i*i; j<=maxn; j= j+i) {
                isprime[j] = false;
            }
        }
    }
    for (int i = 2; i<=maxn; i++) {
        if (isprime[i]) primes.pb(i);
    }
}

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int input;
        cin >> input;
        cout << primes[input-1] << "\n";
    }
    
    
}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   sieveoferathosthenes();
   solve();
}



input numberofgoods
loop while numberofgoods >=1
    input goodsprice
    totalpurchases = totalpurchases + goodsprice
    numberofgoods = numberofgoods-1
end loop
input membershipstatus
if membershipstatus = yes then
    if totalpurchases >=200 then
        output "your total is ", 80/100 * totalpurchases
    else if totalpurchases>=100 then
        output "your total is ", 90/100 * totalpurchases
    else
        output "your total is ", 95/100 * totalpurchases
    end if
else
    if totalpurchases>=100 then
    
        output "your total is ", 95/100 * totalpurchases
    else
        output "your total is ", totalpurchases
    end if
end if
