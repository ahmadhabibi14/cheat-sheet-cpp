#include <iostream>
#include <string>
using namespace std;

int main() {
    int langkah = 16;
    int jumlahRanjau = 0;
    for (int i = 1; i <= langkah; i++) {
        if (i % 5 == 0) {
            cout << "ranjau ";
            jumlahRanjau = jumlahRanjau + 1;
        } else {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Jumlah Ranjau = " << jumlahRanjau << endl;
    
    return 0;
}
// OUTPUT
// 1 2 3 4 ranjau 6 7 8 9 ranjau 11 12 13 14 ranjau 16
// jumlah ranjau = 3