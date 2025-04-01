#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;
    int length = input.length();
    int arraysize = 0;
    if (sqrt(length) == floor(sqrt(length))) {
        arraysize = sqrt(length);
    }
    else {
        arraysize = floor(sqrt(length)) + 1;
    }
    string ditulisulang[arraysize][arraysize];
    for (int i = 0; i<arraysize; i++) {
        if (i % 2 ==  0) {
            for (int j = 0; j<arraysize; j++) {
                int index = i*arraysize+j;
                if (index+1>length) {
                    ditulisulang[i][j] = '.';
                }
                else {
                    ditulisulang[i][j] = input[index];
                }
                
            }
        }
        if (i % 2 == 1) {
            for (int j = 0; j<arraysize; j++) {
                int index = i*arraysize+j;
                if (index+1>length) {
                    ditulisulang[i][arraysize-j-1] = '.';
                }
                else {
                    ditulisulang[i][arraysize-j-1] = input[index];;
                }
            }
         }
        
    }
    for (int i = 0; i<arraysize; i++) {
        for (int j = 0; j<arraysize; j++) {
            if (ditulisulang[i][j].empty()) {
                ditulisulang[i][j] = '.';
                
            }
            
        }
    }
    for (int i = 0; i<arraysize; i++) {
        for (int j = 0; j<arraysize; j++) {
            cout << ditulisulang[i][j];
        }
        cout << "\n";
    }
    
}