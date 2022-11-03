#include <iostream>
using namespace std;

int main() {
    // string ganjilGenap = "Ganjil";

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << " Adalah bilangan genap" << endl;
        } else {
            cout << i << " Adalah bilangan ganjil" << endl;
        }
        
    }
    
    return 0;
}