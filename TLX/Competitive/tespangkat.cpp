#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

bool abundant (int x) {
   int divisors = 0;
   for (int i = 1; i<x; i++) {
      if (x % i == 0) {
         divisors = divisors+i;
      }
   }
   if (divisors>x) {
      return true; 
   }
   else {
      return false;
   }
}

int main() {
   int data[12] = {12, 24, 392, 239, 3242, 4232, 322, 3323, 433, 53, 5332, 3123};
   int odd = 0, even = 0;
   for (int i = 0; i<12; i++) {
      if (abundant(data[i])) {
         if (data[i] % 2 == 0) {
            even++;
            cout << data[i] << endl;
         }
         else {
            odd++;
         }
      }
   }
   cout << "ganjil: " << odd << endl;
   cout << "genap: " << even;
}