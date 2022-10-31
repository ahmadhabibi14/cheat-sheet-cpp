#include <iostream>
#include <string>

using namespace std;

int main() {
    int number = 10;

    for ( i = 0; i < number; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << endl;
    }
    
}