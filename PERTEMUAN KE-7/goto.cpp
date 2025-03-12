#include <iostream>
using namespace std;

int main() {
    int i = 0;
    startLoop:
    if (i < 5) {
        cout << "Perulangan ke-" << i << endl;
        i++;
        goto startLoop;  // Melompat kembali ke label startLoop
    }
    cout << "Perulangan selesai." << endl;
    return 0;
}
