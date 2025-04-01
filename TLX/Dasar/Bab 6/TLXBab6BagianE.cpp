#include <iostream>
using namespace std;
int i;

int main() {
    bool lampu[101];

    // Pada mulanya, seluruh lampu dalam kondisi mati.
    for (i = 1; i <= 100; i++) {
        lampu[i] = false;
    }

    // Untuk setiap jam (pukul p),
    for (int p = 1; p<=10; p++) {
        // untuk setiap lampu nomor i,
        for (i = 1; i <= 100; i++) {
            // jika i merupakan kelipatan p,
            if (!(i % p)) {
                // tekan saklarnya.
                lampu[i] =!lampu[i];
            }
        }
    }

    // Hitung banyaknya lampu yang menyala,
    cout << count (lampu +1, lampu + 101, true);
    // lalu cetak.
}
