#include <iostream>
using namespace std;

int main() {
   int angka;
   cout << "Masukkan angka : ";
   cin >> angka;

   for (int i = 1; i < angka; i++) {
    for (int j = 1; j < angka; j++) {
      cout << "[" << i << "][" << j << "] ";
    }
    cout << endl;
  }

  /*
      HASIL :
      
      [1][1] [1][2] [1][3] [1][4] 
      [2][1] [2][2] [2][3] [2][4] 
      [3][1] [3][2] [3][3] [3][4]
      [4][1] [4][2] [4][3] [4][4]
  */
}