#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    int jumlahhari = 0, jumlahtransaksi = 0, hari = 0, transaksi = 0, jumlahharian = 0, jumlahtotal = 0, jumlahtunai = 0, jumlahnontunai = 0, haritertinggi = 0, berhenti = 0;
    double totalbelanja = 0, totalharian = 0, totalperiode = 0, terbesar = 0, pendapatantertinggi = 0, ratarata = 0;
    string pembayaran;
    cout << "jumlah hari? "; cin >> jumlahhari;
    hari = 1;
    while (hari <= jumlahhari) {
        totalharian = 0; jumlahharian = 0;
        cout << "jumlah transaksi hari ke-" << hari << "? "; cin >> jumlahtransaksi;
        berhenti = 0; transaksi = 1;
        while (transaksi <= jumlahtransaksi && berhenti == 0) {
            cout << "transaksi ke-" << transaksi << ", total belanja (-1 untuk berhenti)? "; cin >> totalbelanja;
            if (totalbelanja == -1) { berhenti = 1; }
            else {
                cout << "pembayaran (Tunai/Non-Tunai)? "; cin >> pembayaran;
                totalharian = totalharian + totalbelanja;
                jumlahharian++;
                totalperiode = totalperiode + totalbelanja;
                jumlahtotal++;
                if (pembayaran == "Tunai") { jumlahtunai++;} 
                else { jumlahnontunai++;}
                if (totalbelanja > terbesar) { terbesar = totalbelanja;}
                transaksi = transaksi + 1; }
        }
        cout << fixed << setprecision(2);
        cout << "Hari ke-" << hari << endl;
        cout << "jumlah transaksi: " << jumlahharian << endl;
        cout << "total pendapatan: " << totalharian << endl;
        if (totalharian > pendapatantertinggi) {
            pendapatantertinggi = totalharian;
            haritertinggi = hari; }
        hari = hari + 1;}
    if (jumlahtotal > 0) { ratarata = totalperiode / jumlahtotal;} 
    else { ratarata = 0; }
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "total pendapatan periode: " << totalperiode << endl;
    cout << "jumlah seluruh transaksi: " << jumlahtotal << endl;
    cout << "transaksi terbesar: " << terbesar << endl;
    cout << "transaksi tunai: " << jumlahtunai << endl;
    cout << "transaksi non-tunai: " << jumlahnontunai << endl;
    cout << "rata-rata transaksi: " << ratarata << endl;
    cout << "hari pendapatan tertinggi: hari ke-" << haritertinggi << endl;
    return 0; }