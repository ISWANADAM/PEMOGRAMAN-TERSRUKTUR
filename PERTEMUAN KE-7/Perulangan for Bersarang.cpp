#include <iostream>
using namespace std;

int main() {
    // Perulangan pertama untuk baris (1 hingga 10)
    for (int i = 1; i <= 10; i++) {
        // Perulangan kedua untuk kolom (1 hingga 10)
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";  // Mencetak hasil perkalian i dan j
        }
        cout << endl;  // Pindah ke baris berikutnya setelah selesai satu baris
    }
    return 0;
}
