#include <iostream>
using namespace std;

void pembatas() {
   cout << "==============================| >" << endl;
}
int main() {
   int angka;
   cout << "Masukkan angka : ";
   cin >> angka;
   pembatas();

   for (int i = 0; i < angka; i++) {
      for (int j = i; j < angka; j++) {
         cout << "[" << i << "][" << j << "] ";
      }
      cout << endl;
   }
   return 0;
}
/*
   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         if (j == i + 1) {
            break;
         }
         cout << j << " ";
      }
      cout << endl;
   }
*/