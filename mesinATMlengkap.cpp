#include <iostream>
#include <string>
using namespace std;

// void tampilanSambutan() {
//     cout << "=====================================================" << endl;
//     cout << "=>        Selamat datang di Mesin ATM HBBIIIII     <=" << endl;
//     cout << "=====================================================" << endl;
//     cout << "=>                                                 <=" << endl;
//     cout << "=> Silahkan pilih menu berikut >                   <=" << endl;
//     cout << "=> 1> Tarik Rp100.000                              <=" << endl;
//     cout << "=> 2> Tarik Rp500.000                              <=" << endl;
//     cout << "=> 3> Cek Saldo                                    <=" << endl;
//     cout << "=> 4> Transfer                                     <=" << endl;
//     cout << "=> 5> Keluar                                       <=" << endl;
//     cout << "=> 6> Tabung                                       <=" << endl;
//     cout << "=>                                                 <=" << endl;
//     cout << "=====================================================" << endl;
// }

int main() {
    string pin;
    int sisa;
    int saldo;
    int menu;
    int nominal;

    login: // label login
    cout << "Masukkan PIN : " << endl;
    cin >> pin;

    if (pin == "123456") {
        saldo = 5000000;
        cout << "=====================================================" << endl;
        cout << "=>        Selamat datang di Mesin ATM HBBIIIII     <=" << endl;
        cout << "=====================================================" << endl;
        cout << "=>                                                 <=" << endl;
        cout << "=> Silahkan pilih menu berikut >                   <=" << endl;
        cout << "=> 1> Tarik Rp100.000                              <=" << endl;
        cout << "=> 2> Tarik Rp500.000                              <=" << endl;
        cout << "=> 3> Cek Saldo                                    <=" << endl;
        cout << "=> 4> Transfer                                     <=" << endl;
        cout << "=> 5> Keluar                                       <=" << endl;
        cout << "=> 6> Tabung                                       <=" << endl;
        cout << "=>                                                 <=" << endl;
        cout << "=====================================================" << endl;
        menu: // Label menu
        cin >> menu;
        if (menu == 1) {
            sisa = saldo - 100000;
            if (sisa >= 50000) {
                cout << "Anda Berhasil Menarik uang sejumlah " << 5000000 - sisa << endl;
                cout << "Sisa saldo anda adalah " << sisa << endl;
            } else {
                cout << "Saldo anda kurang" << endl;
                goto menu;
            }

            goto menu;
        } else if (menu == 3) {
            cout << "SALDO ANDA ADALAH " << saldo << endl;
            system("clear");
            goto menu;
        } else if (menu == 6) {
            cout << "Silahkan masukkan nominal yang akan di tabung :" << endl;
            cin >> nominal;
            saldo = saldo + nominal;

            cout << "Selesai di tabung !!!" << endl;

            goto menu;
        } else if (menu == 5) {
            cout << "Anda akan keluar" << endl;
            goto login;
        }   
    } else {
        cout << "PIN yang anda masukkan salah" << endl;
        goto login;
    }
    return 0;
}