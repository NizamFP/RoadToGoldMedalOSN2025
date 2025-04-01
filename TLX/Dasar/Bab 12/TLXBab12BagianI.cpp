#include <bits/stdc++.h>
using namespace std;

int main() {
    string target = "wkhzhdsrqvduhorfdwhglqwkhhdvwzlqj";
    for (int i = 0; i<26; i++) {
        for (int j = 0; j<target.length(); j++) {
            cout << char(int(target[j] -97 + i) % 26 +97);
        }
        cout << "\n";
    }
    
}