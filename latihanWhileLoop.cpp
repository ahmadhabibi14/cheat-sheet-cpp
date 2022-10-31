#include <iostream>
using namespace std;

int main() {
    int jawaban = 90;
    bool gameSelesai = false;
    int angka;

    while (!gameSelesai) {
        cout << "kdnoif:" << endl;
        cin >> angka;

        if (angka > jawaban) {
            cout << "Angka terlalu besar !!" << endl;
        } else if (angka < jawaban) {
            cout << "Angka terlalu kecil !!!" << endl;
        }
        
        if (angka == jawaban)
        {
            cout << "benar" << endl;
            gameSelesai = true;
        }
        
    }
}