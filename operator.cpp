#include <iostream>
using namespace std;

int main () {
  int panjang = 90;
  cout << panjang << endl;

  cout << panjang + panjang << endl;

  panjang = panjang + panjang;

  cout << panjang << endl;

  int lebar = 50;

  lebar = panjang - lebar;
  cout << lebar << endl;
  int luas = panjang * lebar;

  cout << luas << endl;

  luas = luas / 4;
  cout << luas << endl;

  return 0;
}
