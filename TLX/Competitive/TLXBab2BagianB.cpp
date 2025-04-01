#include <bits/stdc++.h>
using namespace std;

int main() {    
    int N;
    cin >> N;
    int exponenttwo = 0;
    while (N % 2 == 0) {
        N = N/2;
        exponenttwo++;
    }
    int divisor = 3;
    if (exponenttwo > 1) {
        cout << 2 << "^" << exponenttwo;
    }
    else if (exponenttwo == 1) {
        cout << 2;
    }
    else {
        exponenttwo =0;
    }
    while (N !=1) {
        int exponent = 0;
        while (N % divisor == 0) {
            N = N/divisor;
            exponent++;
        }
        if (exponenttwo == 0) {
            if (exponent>1) {
                cout << divisor << "^" << exponent;
                exponenttwo = 1;
            }
            else if (exponent == 1) {
                cout  << divisor;
                exponenttwo = 1;
            }
            else {
                
            }
            divisor = divisor+2;
            
        }
        else {
            if (exponent>1) {
                cout << " x " << divisor << "^" << exponent;
            }
            else if (exponent == 1) {
                cout << " x " << divisor;
            }
            else {

            }
            divisor = divisor+2;
        }
            
        
    }
    
}