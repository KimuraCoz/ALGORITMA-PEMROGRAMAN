#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int jumlahPelanggan, pelangganDapatDiskon = 0, pelangganTanpaDiskon = 0;
    double totalBelanja, diskonDasar, tambahanMember, totalPersenDiskon, diskon, totalBayar;
    double totalTransaksi = 0, totalDiskon = 0, totalPendapatan = 0;
    string status;

    cout << "Masukkan jumlah pelanggan: ";
    cin >> jumlahPelanggan;

    for (int i = 1; i <= jumlahPelanggan; i++) {
        cout << "\nData pelanggan ke-" << i << endl;

        cout << "Total belanja: ";
        cin >> totalBelanja;
        cout << "Status (Member/Non-Member): ";
        cin >> status;

        // Seleksi diskon dasar (urut dari syarat terbesar)
        if (totalBelanja >= 1000000) {
            diskonDasar = 0.15;
        } else if (totalBelanja >= 500000) {
            diskonDasar = 0.10;
        } else if (totalBelanja >= 250000) {
            diskonDasar = 0.05;
        } else {
            diskonDasar = 0;
        }

        // Seleksi tambahan Member
        if (status == "Member") {
            tambahanMember = 0.05;
        } else {
            tambahanMember = 0;
        }

        totalPersenDiskon = diskonDasar + tambahanMember;

        // Pemeriksaan batas maksimal diskon 20%
        if (totalPersenDiskon > 0.20) {
            totalPersenDiskon = 0.20;
        }

        diskon = totalPersenDiskon * totalBelanja;
        totalBayar = totalBelanja - diskon;

        // Counter
        if (totalPersenDiskon > 0) {
            pelangganDapatDiskon++;
        } else {
            pelangganTanpaDiskon++;
        }

        // Accumulator
        totalTransaksi += totalBelanja;
        totalDiskon += diskon;
        totalPendapatan += totalBayar;

        cout << fixed << setprecision(0);
        cout << "Diskon      : Rp" << diskon << endl;
        cout << "Total Bayar : Rp" << totalBayar << endl;
    }

    cout << fixed << setprecision(0);
    cout << "\n=== Rekapitulasi ===" << endl;
    cout << "Pelanggan mendapat diskon       : " << pelangganDapatDiskon << endl;
    cout << "Pelanggan tanpa diskon          : " << pelangganTanpaDiskon << endl;
    cout << "Total transaksi sebelum diskon  : Rp" << totalTransaksi << endl;
    cout << "Total seluruh diskon            : Rp" << totalDiskon << endl;
    cout << "Total pendapatan setelah diskon : Rp" << totalPendapatan << endl;

    return 0;
}