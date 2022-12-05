#include <iostream>
using namespace std;

int main() {
   /*
      OUTPUT :
		O	O	O	O	O
		O	X	O	X	O
		O	O	O	O	O
		O	X	O	X	O
		O	O	O	O	O
   */
   cout << "Tugas Nomor 3 : " << endl;
   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         if ((i % 2 == 0) && (j % 2 == 0)) {
            cout << "O ";
         } else {
            cout << "X ";
            }
      }
      cout << endl;
   }
}
