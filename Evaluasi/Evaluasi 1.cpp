#include <iostream>
using namespace std;

void konversisuhu(double celcius){
    double fahrenheit = (9.0/5.0) * celcius + 32 ;
    double reamur = (4.0/5.0) * celcius;
    double kalvin = celcius + 273.15;

    cout << "suhu" << celcius << "C sama dengan : " << endl;
    cout << fahrenheit << "F (fahrenheit)" << endl;
    cout << reamur << "R (reamur)" << endl;
    cout << kalvin << "K (kalvin)" << endl;

}

int main() {
    double celcius;
    cout << "Masukan Suhu Dalam Celcius: ";
    cin >> celcius;

    konversisuhu(celcius);

    return 0;
}
