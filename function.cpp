#include <iostream>

using namespace std;

// Inisialisasi fungsi,
// nanti di panggil di tempat lain di dalam program
int add2 (int i, int j = 5) {
    int k = i * j;
    return k;
}

int main () {
    // Panggil fungsi nya
    cout << add2(4) << endl;
    return 0;
}