// Project memindahkan nilai variabel
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    cout << "Nilai a adalah " << a << endl;
    cout << "Nilai b adalah " << b << endl;

    // Proses penukaran nilai
    int c = a;
    a = b;
    b = c;

    cout << "=== Nilai Di Pindahkan ===" << endl;
    cout << "Nilai a adalah " << a << endl;
    cout << "Nilai b adalah " << b << endl;

    return 0;
}