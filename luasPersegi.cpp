#include <iostream>
using namespace std;

int main() {
    int luas;
    int panjang = 20;
    int lebar = 10;

    luas = panjang * lebar;

    // LUAS = (4/6) * panjang * lebar
    // luas = 4 * luas / 6 ;

    int sisa = luas % 6;

    cout << sisa << endl;

    return 0;
}