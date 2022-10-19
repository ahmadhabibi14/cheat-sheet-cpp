#include <iostream>
#include <string>

using namespace std;

int main() {
    int var = 20;
    int *ptr;
    ptr = &var;

    cout << var << endl;

    cout << ptr << endl;

    cout << *ptr << endl;
    return 0;
}