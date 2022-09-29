#include <iostream>
using namespace std;

int main() {
    float luas;
    float vi = 3.14;
    float jari_jari = 150;

    luas = vi * jari_jari * jari_jari;
    luas = (3 * luas) / 4;

    cout << luas << endl;
    return 0;
}