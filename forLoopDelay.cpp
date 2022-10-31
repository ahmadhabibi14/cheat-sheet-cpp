// PROGRAM MENAMPILKAN JAM
#include <unistd.h>
#include <iostream>
using namespace std;
int main() {
    // Deklarasi Variabel untuk detik, menit, dan jam
    int detik = 0;
    int menit = 0;
    int jam = 0;
    int hari = 0;
    while (true) {
        // KONDISI UNTUK MENAMPILKAN JAM DAN MENIT
        if (detik == 60) {
            // Jika detik sama dengan 60, maka detik sama dengan 0
            // Dan menit akan bertambah
            detik = 0;
            menit++;
        } else if (menit == 60) {
            // Jika menit sama dengan 60, maka menit sama dengan 0
            // Dan jam akan bertambah
            menit = 0;
            jam++;
        } else if (jam == 23) {
            // Jika jam sama dengan 60, maka jam sama dengan 0
            // Dan hari akan bertambah
            jam = 0;
            hari++;
        }
        system("clear");
        // TAMPILKAN JAM
        cout << hari << " : " << jam << " : " << menit << " : " << detik << endl;
        // DEKLARASIKAN DELAY
        unsigned int microsecond = 100000;
        usleep(microsecond);
        // SELAMA PERULANGAN BERLANGSUNG, DETIK AKAN TERUS BERTAMBAH
        detik++;
    }
}