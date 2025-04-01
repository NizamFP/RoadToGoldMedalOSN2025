#include <bits/stdc++.h>
using namespace std;

void makan(int input) {
    if (input ==  1) {
        cout << "*" << "\n";
    }
    else {
        makan(input-1);

        
        cout << "\n";
        makan(input-1);
    }

}

int main() {
    int N;
    cin >> N;
    makan(N);
}


