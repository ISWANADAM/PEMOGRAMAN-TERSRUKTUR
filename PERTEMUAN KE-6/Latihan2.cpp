#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel
    int skor;

    // Input skor mahasiswa
    cout << "Masukkan skor mahasiswa: ";
    cin >> skor;

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
