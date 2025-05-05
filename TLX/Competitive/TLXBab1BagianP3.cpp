#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back

void solve() {
   int N;
   string pertama_asli, pertama_diubah, kedua_diubah;
   vector<char> rumus_awal;
   vector <char> diubah;
   vector <char> final;
   bool bingung = false;
   cin >> N >> pertama_asli >> pertama_diubah >> kedua_diubah;
   for (int i = 0; i<N; i++) {
      auto ditemukandiawal = find(rumus_awal.begin(), rumus_awal.end(), pertama_asli[i]);
      int indexawal = ditemukandiawal - rumus_awal.begin();
      auto ditemukandiakhir = find(diubah.begin(), diubah.end(), pertama_diubah[i]);
      int indexakhir = ditemukandiakhir - diubah.begin();
      if (ditemukandiawal == rumus_awal.end() && ditemukandiakhir == diubah.end()) {
         rumus_awal.pb(pertama_asli[i]);
         diubah.pb(pertama_diubah[i]);
      }
      else if (rumus_awal[indexawal] == pertama_asli[i] && diubah[indexakhir] == pertama_diubah[i]) {

      }
      else {

         bingung = true;
      }
   }
   for (int i = 0; i<N; i++) {
      char elemenke_n = kedua_diubah[i];
      if (find(diubah.begin(), diubah.end(), elemenke_n) != diubah.end()) {
         int index = find(diubah.begin(), diubah.end(), elemenke_n) - diubah.begin();
         final.pb(rumus_awal[index]);
      }
      else {
         final.pb('?');
      }
      if (bingung == false) {
         cout << final[i];
      }
      else {
         cout << "Pak Dengklek bingung";
         break;
      }
   }

}

int main() {
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}