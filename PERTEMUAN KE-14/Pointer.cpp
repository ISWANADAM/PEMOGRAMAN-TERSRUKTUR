#include <iostream>
using namespace std;

int main() {
    int var = 10;
    int* ptr = &var; // ptr menyimpan alamat

    cout << "Alamat var: " << ptr << endl;

    cout << "Nilai var melalui pointer: " << *ptr << endl;

    return 0;
}
