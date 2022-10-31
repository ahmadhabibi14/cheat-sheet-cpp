// TODO :
// Buat output berikut.
// 8
// 6
// 4
// 2

#include <iostream>
using namespace std;
  
int main () {
  int i = 9;

  while ( i > 1) {
    if (i % 2 == 0) {
      cout << i << endl;
    }

    i--;
  }

  return 0;
}
