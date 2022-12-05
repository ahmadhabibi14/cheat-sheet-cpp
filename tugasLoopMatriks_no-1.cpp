#include <iostream>
using namespace std;

int main() {
  /*
   * OUTPUT :
   *        O
   *        O
   *  O  O  O  O  O
   *        O
   *        O
  */
  int operasi = 5 % 2 + 1;
  cout << "Tugas Nomor 1 : " << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == operasi) {
        cout << "O ";
      } else if (j == operasi) {
        cout << "O ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
}
