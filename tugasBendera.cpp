#include <iostream>
using namespace std;

int main() {
    /*
	    OUTPUT :
	    O	O	O	*	*	*	=	=	=
	    O	O	O	*	*	*	=	=	=
	    O	O	O	*	*	*	=	=	=
	    O	O	O	*	*	*	=	=	=
	    O	O	O	*	*	*	=	=	=
    */
    int angka;
    cout << "Masukkan angka : ";
    cin >> angka;
    for (int i = 1; i < angka; i++) {
        for (int j = 1; j <= 9; j++) {
            if (j < 4) {
                cout << "O ";
            } else if (j < 7) {
                cout << "* ";
            } else {
                cout << "= ";
            }
        }
        cout << endl;
    }
}