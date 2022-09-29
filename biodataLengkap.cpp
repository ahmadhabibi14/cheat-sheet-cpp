#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "===================================" << endl;
    cout << "======= BIODATA diri pribadi ======" << endl;
    cout << "===================================" << endl;

    string nama;
    string nik;
    int tanggalLahir;
    int bulanLahir;
    int tahunLahir;
    string tempatLahir;
    string jenisKelamin;
    string alamat;
    string pekerjaan;

    cout << "Siapa namamu ? ";
    cin >> nama;

    cout << "Masukkan nik > ";
    cin >> nik;

    cout << "Masukkan tanggal lahir > ";
    cin >> tanggalLahir;

    cout << "Masukkan bulan lahir > ";
    cin >> bulanLahir;

    cout << "Masukkan tahun lahir > ";
    cin >> tahunLahir;

    cout << "Tempat lahir > ";
    cin >> tempatLahir;

    cout << "Jenis Kelamin mu > ";
    cin >> jenisKelamin;

    cout << "Alamat mu > ";
    cin >> alamat;

    cout << "Pekerjaan mu > ";
    cin >> pekerjaan; 

    cout << endl << endl;

    cout << "=========== DATA DIRI MU ============" << endl;
    cout << "|" << endl;
    cout << "| Nama : " << nama << endl;
    cout << "| NIK : " << nik << endl;
    cout << "| Tempat tanggal lahir : " << tempatLahir << ", " << tanggalLahir << "-" << bulanLahir << "-" << tahunLahir << endl;
    cout << "| Jenis kelamin : " << jenisKelamin << endl;
    cout << "| Alamat : " << alamat << endl;
    cout << "| Pekerjaan : " << pekerjaan << endl;
    cout << "|" << endl;
    cout << "=======================================" << endl;

    return 0;

}