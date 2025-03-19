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

    // Menambahkan operasi perkalian, pengurangan, pembagian, dan modulus
    cout << "Hasil pengurangan: " << (bilA - bilB) << endl;
    cout << "Hasil perkalian: " << (bilA * bilB) << endl;
    if (bilB != 0) {
        cout << "Hasil pembagian: " << (float)bilA / bilB << endl;
        cout << "Hasil modulus: " << (bilA % bilB) << endl;
    } else {
        cout << "Pembagian dan modulus dengan nol tidak diperbolehkan." << endl;
    }

    return 0;
}
