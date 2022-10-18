// Ini di inisialisasi 5 array
// int arrayOfInts[5] = {10, 20, 30, 40, 50};

// Walau jumlah array tidak di deklarasikan, akn otomatis di kalkulasi oleh Compiler
// int arrayOfInts[] = {10, 20, 30, 40, 50};

// Kalau jumlah array di deklarasikan tapi array yang kita tulis
// kurang dari yang di deklarasi, kompiler tetap akan membuat array dengan jumlah yang di deklarasikan.
// Akan tetapi nilai array tersebut adalah 0
// int arrayOfInts[5] = {10,20}; means 10, 20, 0, 0, 0

// Pengaksesan nilai array di mulai dari 0

#include <iostream>
#include <string>

using namespace std;

int main() {
    string habibi[] = {
        "Ahmad",
        "Rizky",
        "Nusantara",
        "Habibi"
    };

    // Tampilkan array di length 3
    cout << habibi[3] << endl;

    return 0;
}