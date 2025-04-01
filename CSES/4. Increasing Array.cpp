#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long number[n];
    long long moves = 0;
    for (int i = 0; i<n; i++) {
        cin >> number[i];
    }
    for (int i = 0; i<n-1; i++) {
            if (number[i+1] < number[i]) {
                moves = moves + abs(number[i]-number[i+1]);
                number[i+1] = number[i];
       }
    }
    cout << moves;
    
    }  
