#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    int sofar = 0;
    int terbesar = 0;
    getline(cin, line);
    int length = line.length();
    for (int i = 0; i<length; i++) {
        if (line[i] == line[i + 1]) {
            sofar = sofar+ 1; 
        }
        else {
            sofar = sofar+1;
            if (sofar > terbesar) {
                terbesar = sofar;
            }
            sofar = 0;
        }
    }
    cout << terbesar << "\n";
}