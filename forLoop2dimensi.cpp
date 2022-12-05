#include <iostream>
using namespace std;

void pembatas() {
   cout << "==============================| >" << endl;
}

int main() {
  int angka;
  cout << "Masukkan angka : ";
  cin >> angka;
  string kata = "Hello";
  pembatas();

  int k = 0;
  for (int i = 0; i < angka; i++) {
    for (int j = i; j < angka; j++) {
      k++;
      cout << kata << " ";
    }
    cout << endl;
  }

  pembatas();
  cout << "Jumlah " << kata << " = " << k <<endl;
  return 0;
}