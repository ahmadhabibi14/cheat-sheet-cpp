#include <iostream>

using namespace std;

int main(){
    // Deklarasi Tahun Lahir
    int tahunLahir;

    // Masukkan tahun lahir
    cout << "Masukkan Tahun Lahir > ";
    cin >> tahunLahir;

    // Tentukan tahun sekarang
    int tahunSekarang = 2022;

    // Rumus umur
    int umur = tahunSekarang - tahunLahir;

    // Tampilkan output umur
    cout << "Umur mu adalah : ";
    cout << umur << endl;

    return 0;
}