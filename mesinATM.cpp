#include <iostream>
#include <string>
using namespace std;

int main() {
    string pin;
    login:
    cout << "Masukkan Pin : ";
    cin >> pin;

    if (pin == "123456") {
        cout << "Lanjut ke proses selanjutnya" << endl;
    } else {
        goto login;
    }

    return 0;
}