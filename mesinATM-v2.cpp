#include <iostream>
#include <string>
using namespace std;

void tampilanSambutan() {
    cout << "========================================" << endl;
    cout << "= Selamat datang di Mesin ATM HBBIIIII =" << endl;
    cout << "=                                      =" << endl;
    cout << "=                                      =" << endl;
    cout << "========================================" << endl;
}

int main() {
    string pin;
    login:
    cout << "Masukkan Pin : ";
    cin >> pin;

    if (pin == "123456") {
        tampilanSambutan();
    } else {
        goto login;
    }

    return 0;
}