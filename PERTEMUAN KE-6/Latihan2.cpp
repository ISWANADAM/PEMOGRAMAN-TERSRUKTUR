#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel
    int skor;

    // Input skor mahasiswa dengan validasi tanpa while
    cout << "Masukkan skor mahasiswa (0-100): ";
    cin >> skor;

    if (skor < 0 || skor > 100) {
        cout << "Skor harus dalam rentang 0-100. Program dihentikan.\n";
        return 1;
    }

    // Menentukan nilai huruf berdasarkan skor
    char nilai;

    if (skor > 80) {
        nilai = 'A';
    } else if (skor >= 60) { // 60 - 79
        nilai = 'B';
    } else if (skor >= 40) { // 40 - 59
        nilai = 'C';
    } else if (skor >= 20) { // 20 - 39
        nilai = 'D';
    } else { // < 20
        nilai = 'E';
    }

    // Menampilkan hasil
    cout << "Nilai mahasiswa: " << nilai << endl;

    return 0;
}
