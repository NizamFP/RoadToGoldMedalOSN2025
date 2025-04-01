#include <bits/stdc++.h>
using namespace std;


int main() {
    long long t;
    cin >> t;
    t = t*2;
    long long request[t];
    for (long long i = 0; i<2*t; i++) {
        cin >> request[i];
    }
    for (long long i = 0; i<t; i = i+2) {
        long long angka = 0;
        if (request[i] > request[i+1] ) {
            if (request[i] % 2 == 0) {
                angka = request[i]*request[i];
                angka = angka - request[i+1]+1;
            }
            else {
                angka = (request[i]-1)*(request[i]-1)+request[i+1];
            }
        }
        else if (request[i] < request[i+1]) {
            if (request[i+1] % 2 == 1) {
                angka = (request[i+1])*(request[i+1]);
                angka = angka - request[i]+1;
            }
            else {
                angka = angka+ (request[i+1]-1) * (request[i+1]-1) + request[i];
            }
        }
        else {
            angka = request[i] * request[i]-request[i]+1;
        }
        cout << angka<< "\n";
    }
    

}