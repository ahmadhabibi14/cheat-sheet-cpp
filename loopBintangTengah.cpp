#include <iostream>
using namespace std;

int main() {
    int angka = 9;
    for (int i = 1; i <= angka; i++) {

        int n = angka;
        int tengah = angka / 2;
        
        if (i == 1) {
            cout << "#" << " ";
        } else if (i == tengah + 1){
            cout << "#" << " ";
        } else if (i == n){
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

// # - - - - - - # - - - - - - #