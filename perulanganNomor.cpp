#include <iostream>
using namespace std;

int main() {

    int hasil = 0;
    // 3 5 7 9 11
    for(int i = 3; i <= 11; i+=2) {
        hasil = hasil + i;
        cout << i << " ";
    }
    cout << endl;
    cout << "Hasil penjumlahan : " << hasil << endl;

    cout << endl;

    // 2 4 16 256
    for(int i = 2; i <= 256; i*=i) {
        hasil = hasil + i;
        cout << i << " ";
    }

    cout << endl;
    cout << "Hasil penjumlahan : " << hasil << endl;

    cout << endl;
}