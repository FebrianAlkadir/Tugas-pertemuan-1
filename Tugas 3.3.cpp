#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    int no_urut;
    string nama;
    int umur;
    string alamat;
    float nilai;
};

int main() {
    Mahasiswa mhs[15];

    for (int i = 0; i < 15; i++) {
        mhs[i].no_urut = i + 1;
        cout << "\nMahasiswa ke-" << mhs[i].no_urut << ":\n";
        cin.ignore();
        cout << "Nama    : ";
        getline(cin, mhs[i].nama);
        cout << "Umur    : ";
        cin >> mhs[i].umur;
        cin.ignore();
        cout << "Alamat  : ";
        getline(cin, mhs[i].alamat);
        cout << "Nilai   : ";
        cin >> mhs[i].nilai;
    }

    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < 15; i++) {
        cout << mhs[i].no_urut << " - " << mhs[i].nama << " - " 
             << mhs[i].umur << " tahun - " << mhs[i].alamat 
             << " - Nilai: " << mhs[i].nilai << endl;
    }

    return 0;
}

