#include <iostream>
using namespace std;

// Fungsi untuk menambah data
int tambah(int a, int b) {
    return a + b;
}

// Fungsi utama
int main() {
    // Memanggil fungsi
    int bilA, bilB;
    cout << "Masukkan nilai pertama: ";
    cin >> bilA;
    cout << "Masukkan nilai kedua: ";
    cin >> bilB;
    int hasil = tambah(bilA, bilB);
    cout << "Hasil penjumlahan: " << hasil << endl;

    return 0;
}
