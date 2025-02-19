#include <iostream>
using namespace std;
int main() {
    int nilai;
    cout << "Masukan Nilai : ";
    cin >> nilai;
    if (nilai > 60) {
        cout << "Lulus" << endl;
    } else {
        cout << "Tidak Lulus" << endl;
    }

    return 0;
}
