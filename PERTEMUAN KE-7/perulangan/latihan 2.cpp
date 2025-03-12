//
#include  <iostream>
using namespace std;
int main(){
    // siapkan 2 variable
    int x = 1;
    int total=0;
    while(x<=10){
        cout << "interasi : " << x << endl;
        total+=x;
        x++;
}
    cout<<"Hasil Penjumlahan Nilai 1 s/d 10 : "<< total <<endl;
    return 0;
}
