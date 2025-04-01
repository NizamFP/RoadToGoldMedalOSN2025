#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    vector<int> integer;
    int length;
    int result;
    length = data.size();
    int a;
    for (a = 0; a<length; a++) {
        integer[a] = stoi(data[a]);
    }
    if (op == '+') {
        for (a = 0; a<length; a++) {
            result = result + integer[a];
            return result;
        }
    }
    else if (op == '*') {
        for (a = 0; a<length; a++) {
            result= result * integer[a];
            return result;
        }
    }
    else {
        return "KESALAHAN";
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
