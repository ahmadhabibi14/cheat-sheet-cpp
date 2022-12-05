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
   cout << "Tugas Nomor 2 : " << endl;
   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         if ((i % 2 == 1) && (j % 2 == 1)) {
            cout << "X ";
         } else {
            cout << "O ";
         }
      }
      cout << endl;
   }
}
