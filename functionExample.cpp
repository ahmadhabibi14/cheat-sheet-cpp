#include <iostream>
using namespace std;

void pembuka(string kata_kata) {
    cout << "+====== " << kata_kata << "======+" << endl;
}

void biodata(string nama, string alamat, string tanggalLahir, char jenisKelamin, int umur) {
    cout << "Nama : " << nama << endl;
    cout << "Alamat : " << alamat << endl;
    cout << "Tanggal Lahir : " << tanggalLahir << endl;
    cout << "Jenis Kelamin : " << jenisKelamin << endl;
    cout << "Umur : " << umur << endl;
}

int main() {
    pembuka("Biodata dengan Function");
    biodata(
        "Habibi",
        "Sintung, Pringgarata, Lombok Tengah, NTB",
        "14 Mei 2004",
        'L',
        18
    );
    return 0;
}