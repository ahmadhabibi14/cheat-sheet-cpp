#include <iostream>
using namespace std;

int main() {
    string nama;
    string kabar;

    cout << "Siapa nama anda ? " << endl;
    cin >> nama;
    cout << "Halo " << nama << endl;

    cout << "Bagaimana kabar anda " << nama << "?" << endl;
    cin >> kabar;
    cout << "Mantap, saya juga " << kabar << endl;

    return 0;
}