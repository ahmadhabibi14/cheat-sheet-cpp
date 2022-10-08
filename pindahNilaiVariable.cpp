// Project memindahkan nilai variabel

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    cout << "Nilai a adalah " << a << endl;
    cout << "Nilai b adalah " << b << endl;
    cout << "Nilai c adalah " << c << endl;


    // Proses penukaran nilai
    int d = a;
    a = c;
    c = b;
    b = d;

    cout << "=== Nilai Di Pindahkan ===" << endl;
    cout << "Nilai a adalah " << a << endl; // 30
    cout << "Nilai b adalah " << b << endl; // 10
    cout << "Nilai c adalah " << c << endl; // 20

    return 0;
}