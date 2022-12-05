#include <iostream> // Ini adalah library iostream
#include <string> // ini adalah library string
using namespace std; // ini untuk memakai standar yang ada di namespace
int main () { // membuka fungsi main
    int a; // deklarasi variabel a, tipe data integer
    int b; // deklarasi variabel b
    string hasil; // deklarasi variabek hasil, tipe data string
    cout << "Masukkan berat keranjang A : "; // tampilkan string
    cin >> a; // input variabel a
    cout << "Masukkan berat keranjang B : "; // tampilkan string
    cin >> b; // input variabel b
    if (a > b) { // kondisional jika a lebih besar dari b
        hasil = "Keranjang A lebih berat dari Keranjang B"; // aksi yang dilakukan dari kondisional di atas
    } else if (b > a) { // jika b lebih besar dari a
        hasil = "Keranjang B lebih berat dari Keranjang A"; // aksi dari kondisional di atas
    } else { // hal lain yang dilakukan jika kondisonal tidak terpenuhi
        hasil = "Keranjang A berat nya sama dengan Keranjang B"; // aksi dari hal lain yang di lakukan
    }
    cout << endl << "Hasil : " << hasil << endl; // tampilkan hasil dari operasi di atas
    return 0; // memberitahukan kompiler bahwa operasi dari fungsi ini sudah selesai dengan exit code 0
} // tutup fungsi main