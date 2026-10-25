#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "Masukkan n: "; cin >> n;
    long long total = 0;

    clock_t mulai = clock();
    for (int i = 1; i <= n; i++) {
        total += 1; }
    clock_t selesai = clock();

    double waktu = double(selesai - mulai) / CLOCKS_PER_SEC;
    cout << "Total = " << total << endl;
    cout << "Waktu eksekusi = " << waktu << " detik" << endl;
    return 0;
}