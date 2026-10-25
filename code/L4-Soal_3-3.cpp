#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "Masukkan n: ";
    cin >> n;
    long long jumlah = 0;

    clock_t mulai = clock();
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            jumlah += 1; }
        }
    clock_t selesai = clock();

    double waktu = double(selesai - mulai) / CLOCKS_PER_SEC;
    cout << "Jumlah = " << jumlah << endl;
    cout << "Waktu eksekusi = " << waktu << " detik" << endl;
    return 0;
}