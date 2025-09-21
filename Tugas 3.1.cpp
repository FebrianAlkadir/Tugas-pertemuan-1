#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    int no_urut;
    string nama;
    int usia;
    float nilai;
};

int main() {
    Mahasiswa mhs;

    cout << "Masukkan No urut: ";
    cin >> mhs.no_urut;
    cin.ignore();
    cout << "Masukkan Nama: ";
    getline(cin, mhs.nama);
    cout << "Masukkan Usia: ";
    cin >> mhs.usia;
    cout << "Masukkan Nilai: ";
    cin >> mhs.nilai;

    cout << "\nData Mahasiswa:\n";
    cout << "No Urut: " << mhs.no_urut << endl;
    cout << "Nama   : " << mhs.nama << endl;
    cout << "Usia   : " << mhs.usia << endl;
    cout << "Nilai  : " << mhs.nilai << endl;

    return 0;
}

