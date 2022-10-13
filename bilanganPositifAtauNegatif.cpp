#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x < 0)
    {
        cout << "X adalah bilangan negatif" << endl;
    }
    else if (x > 0)
    {
        cout << "X adalah bilangan positif"  << endl;
    }
    else
    {
        cout << "X adalah bilangan netral"  << endl;
    }
    return 0;
}