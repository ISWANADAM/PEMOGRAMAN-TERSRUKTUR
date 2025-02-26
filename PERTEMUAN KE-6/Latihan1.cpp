#include <iostream>

using namespace std;

int main() {
    int tinggi, berat, selisih;

    // Input tinggi badan dan berat badan
    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggi;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;

    // Menghitung selisih tinggi badan dan berat badan
    selisih = tinggi - berat;

    // Menentukan kategori berat badan
    if (selisih > 120) {
        cout << "Kategori berat badan: Kegemukan" << endl;
    } else if (selisih >= 111 && selisih <= 120) {
        cout << "Kategori berat badan: Ideal" << endl;
    } else if (selisih >= 100 && selisih <= 110) {
        cout << "Kategori berat badan: Kurus" << endl;
    } else {
        cout << "Kategori berat badan: Sangat Kurus" << endl;
    }

    return 0;
}
