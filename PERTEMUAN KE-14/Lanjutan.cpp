#include <iostream>
#include <fstream>
using namespace std;
int main() {
    //Menulis ke fifle
    ofstream outFile("data.txt");
    outFile << "Hallo, Dunia!" << endl;
    outFile.close();
    //Membaca dari file
    ifstream inFile("data.txt");
    string line;
    while(getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
    return 0;
}
