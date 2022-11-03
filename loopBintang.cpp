#include <iostream>
using namespace std;

int main() {
    int angka = 10;
    for (int i = 1; i <= angka; i++) {
        int n = angka - 2;
        if (i <= 2) {
            cout << "#" << " ";
        } else if (i > n){
            cout << "#" << " ";
        } else {
            cout << "-" << " ";
        }
    }
    cout << endl;
    return 0;
}

// EXPECTED OUTPUT :
// # # - - - - - - # #