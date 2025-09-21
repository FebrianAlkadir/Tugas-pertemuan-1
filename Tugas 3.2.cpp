#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    int no_urut;
    string nama;
    int umur;
};

int main() {
    Mahasiswa mhs[5];

    for (int i = 0; i < 5; i++) {
        mhs[i].no_urut = i + 1;
        cin.ignore();
        cout << "Nama Mahasiswa ke-" << mhs[i].no_urut << ": ";
        getline(cin, mhs[i].nama);
        cout << "Umur Mahasiswa ke-" << mhs[i].no_urut << ": ";
        cin >> mhs[i].umur;
    }

    cout << "\nDetail Mahasiswa No Urut 2:\n";
    cout << "No Urut: " << mhs[1].no_urut << endl;
    cout << "Nama   : " << mhs[1].nama << endl;
    cout << "Umur   : " << mhs[1].umur << endl;

    return 0;
}

