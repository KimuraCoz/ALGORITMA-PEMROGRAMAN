#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "Masukkan n: "; cin >> n;

    clock_t mulai = clock();
    long long hasil = 1;
    clock_t selesai = clock();

    double waktu = double(selesai - mulai) / CLOCKS_PER_SEC;
    cout << "Hasil = " << hasil << endl;
    cout << "Waktu eksekusi = " << waktu << " detik" << endl;
    return 0;
}