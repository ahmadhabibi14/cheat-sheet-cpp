#include <iostream>
using namespace std;

void pembatas() {
   cout << "==============================| >" << endl;
}

int main () {
   // int angka;
   // cout << "Masukkan angka : ";
   // cin >> angka;
   // pembatas();

   for (int i = 1; i <= 5; i++) {
      // i = VERTIKAL
      for (int j = 1; j <= 5; j++) {
         // J =  HORIZONTAL
         if (j == i)  {
            cout << "*";
         } else if ((i + j == 5)){
            cout << "*";
         } else {
            cout << " ";
         }
         // cout << j << " ";
      }
      cout << endl;
   }
   return 0;
}

/*
   for (int i = 0; i <= angka; i++) {
      // i = VERTIKAL
      for (int j = 0; j <= angka; j++) {
         // J =  HORIZONTAL
         if (j == i) {
            cout << "*";
         } else {
            cout << " ";
         }
      }
      cout << endl;
   }
   HASIL :
   *     
     *    
       *   
         *  
           * 
             *
*/