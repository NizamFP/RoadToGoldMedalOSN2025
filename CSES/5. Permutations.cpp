#include <bits/stdc++.h>
using namespace std;

void findnumber() {
    
}

int main() {
    int n;
    cin >> n;
    if (n>3) {
        for (int i = 2; i<=n; i= i+2) {
            cout << i << " "; 
        }
        for (int i = 1; i<=n; i = i+2) {
            cout << i << " ";
        }
        
    }
    else if (n==1) {
        cout << 1;
    }
    
    else {
        cout << "NO SOLUTION";
    }
}