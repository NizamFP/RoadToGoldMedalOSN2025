#include <iostream>
using namespace std;

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++) {
        int harga_bebek;

        // hitung biaya membeli bebek-bebek jantan
        if (jantan[i] < 10) {
            harga_bebek = 100000;
            cout << "100rbjantan";
        } else if (10<=jantan[i] && jantan[i]<=50) {
            harga_bebek = 75000;
            cout << "75rbjantan";
        } else {
            harga_bebek = 50000;
            cout << "50rbjantan";
        }
        int biaya_jantan = harga_bebek*jantan[i];

        // hitung biaya membeli bebek-bebek betina
        if (betina[i] <10) {
            harga_bebek = 100000;
            cout << "100rbbetina";
        } else if (10<=betina[i] && betina[i]<=50) {
            harga_bebek = 75000;
            cout << "75rbbetina";
        } else {
            harga_bebek = 50000;
            cout << "50rbbetina";
        }
        cout << jantan[i] << endl << betina[i] << endl;
        int biaya_betina = harga_bebek*betina[i];

        // cetak total biaya
        cout << biaya_jantan + biaya_betina << endl;
    }
}
