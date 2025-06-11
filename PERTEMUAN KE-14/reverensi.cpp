#include <iostream>
using namespace std;

int main() {
    int var = 20;
    int& ref = var;
    cout << "Nilai var: " << var << endl;
    cout << "Nilai melalui referensi: " << ref << endl;
    ref = 30;
    cout << "Nilai var setelah perubahan: " << var << endl;
    return 0;
}
