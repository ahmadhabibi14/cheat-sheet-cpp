#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
    int celcius;
    cout << "Enter Temperature in celcius:";
    cin >> celcius;

    int factor;
    factor = 212 - 23;

    int fahrenheit = factor * celcius/100 + 32;

    cout << "Fahrenheit value is:";
    cout << fahrenheit << endl;

    system("PAUSE");
    return 0;
}