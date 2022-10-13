#include <iostream>
using namespace std;
int main()
{
    bool done = false;
    while (!done)
    {
        done = true;
        string username;
        string password;
        cout << "Masukkan username : " << endl;
        cin >> username;
        cout << "Masukkan password : " << endl;
        cin >> password;

        if (username == "ahmadhabibi" && password == "habibi")
        {
            cout << "==== Selamat datang " << username << endl;
            string nama;
            string kabar;

            cout << "Siapa nama anda ? " << endl;
            cin >> nama;
            cout << "Halo " << nama << endl;

            cout << "Bagaimana kabar anda " << nama << "?" << endl;
            cin >> kabar;
            cout << "Mantap, saya juga " << kabar << endl;
        }
        else
        {
            cout << "< username atau password salah !!! >" << endl;
            done = false;
        }
    }
    return 0;
}