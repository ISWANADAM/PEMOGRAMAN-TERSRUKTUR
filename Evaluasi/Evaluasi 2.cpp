#include <iostream>
using namespace std;

int main() {
    double panjang, hasil;
    int pilihan;

    cout << "Pilih jenis konversi panjang:" << endl;
    cout << "1. Yard ke Meter" << endl;
    cout << "2. Kaki ke Meter" << endl;
    cout << "3. Inchi ke Meter" << endl;
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;
    cout << "Masukkan panjang: ";
    cin >> panjang;

    if (pilihan == 1) {
        hasil = panjang * 0.9144;
    } else if (pilihan == 2) {
        hasil = panjang * 0.3048;
    } else if (pilihan == 3) {
        hasil = panjang * 0.0254;
    } else {
        cout << "Pilihan tidak valid!" << endl;
        return 1;
    }

    cout << "Hasil konversi: " << hasil << " Meter" << endl;

    return 0;
}
