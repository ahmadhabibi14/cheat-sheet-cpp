/*
    TUGAS

    N = 13

    O * * * O = = = O * * * O
    
*/

#include <iostream>
using namespace std;

int main() {
    int n = 13;
    int tengah = n / 2;
    for (int i = 1; i <= n; i++) {
        if (i >= tengah && i <= (tengah +2)) {
            cout << "= ";
        } else if (i == (tengah - 1) && i == (tengah + 3) && i == 1 && i == n ){
            cout << "O ";
        } else {
            cout << "* ";
        }
    }
    cout << endl;
    
    return 0;
}