#include <iostream>

using namespace std;

// Inisialisasi fungsi,
// Void function, yaitu function yang tidak mengembalikan nilai apapun,
// atau tidak melakukan return value
void voidFunction() {
    cout << "==== INI HASIL DARI VOID Function" << endl;
}

// nanti di panggil di tempat lain di dalam program
int add2 (int i, int j = 5) {
    int k = i * j;
    return k;
}

// kalo ada function selain void, harus ada return berdasarkan tipe data function nya
int main () {
    // Panggil fungsi nya
    cout << add2(4) << endl;
    return 0;
}