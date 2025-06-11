#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main() {
    Mahasiswa mhs1;

    mhs1.nama = "Andi";
    mhs1.umur = 20;
    mhs1.ipk = 3.75;

    cout << "Nama: " << mhs1.nama << endl;
    cout << "IPK : " << mhs1.ipk << endl;
    cout << "Umur: " << mhs1.umur << endl;

    return 0;
}
