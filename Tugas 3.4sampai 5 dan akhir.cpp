#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Buku {
    int nomorAkses;
    string penulis;
    string judul;
    int jumlah;
    bool diterbitkan; // true jika diterbitkan
};

vector<Buku> perpustakaan;

void tampilkanInfo() {
    for (const auto& b : perpustakaan) {
        cout << "No Akses: " << b.nomorAkses << ", Penulis: " << b.penulis
             << ", Judul: " << b.judul << ", Jumlah: " << b.jumlah
             << ", Status: " << (b.diterbitkan ? "Diterbitkan" : "Tidak") << endl;
    }
}

void tambahBuku() {
    Buku b;
    cout << "Nomor Akses: ";
    cin >> b.nomorAkses;
    cin.ignore();
    cout << "Penulis: ";
    getline(cin, b.penulis);
    cout << "Judul: ";
    getline(cin, b.judul);
    cout << "Jumlah: ";
    cin >> b.jumlah;
    b.diterbitkan = false;
    perpustakaan.push_back(b);
}

void tampilkanPenulisTertentu() {
    string penulis;
    cin.ignore();
    cout << "Masukkan penulis: ";
    getline(cin, penulis);
    for (const auto& b : perpustakaan) {
        if (b.penulis == penulis)
            cout << b.judul << " (" << b.jumlah << ")\n";
    }
}

void jumlahBukuJudul() {
    string judul;
    cin.ignore();
    cout << "Masukkan judul: ";
    getline(cin, judul);
    int total = 0;
    for (const auto& b : perpustakaan) {
        if (b.judul == judul)
            total += b.jumlah;
    }
    cout << "Jumlah buku judul \"" << judul << "\" = " << total << endl;
}

void totalBuku() {
    int total = 0;
    for (const auto& b : perpustakaan)
        total += b.jumlah;
    cout << "Total semua buku di perpustakaan = " << total << endl;
}

void terbitkanBuku() {
    int noAkses;
    cout << "Masukkan nomor akses buku: ";
    cin >> noAkses;
    for (auto& b : perpustakaan) {
        if (b.nomorAkses == noAkses) {
            if (b.jumlah > 0) {
                b.jumlah -= 1;
                b.diterbitkan = true;
                cout << "Buku diterbitkan. Sisa: " << b.jumlah << endl;
            } else {
                cout << "Stok habis!\n";
            }
            return;
        }
    }
    cout << "Buku tidak ditemukan!\n";
}

int main() {
    int pilihan;
    do {
        cout << "\nMenu:\n"
             << "1 - Menampilkan informasi buku\n"
             << "2 - Tambahkan buku baru\n"
             << "3 - Tampilkan semua buku di perpustakaan penulis tertentu\n"
             << "4 - Menampilkan jumlah buku dengan judul tertentu\n"
             << "5 - Menampilkan jumlah total buku di perpustakaan\n"
             << "6 - Terbitkan buku\n"
             << "0 - Keluar\n"
             << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: tampilkanInfo(); break;
            case 2: tambahBuku(); break;
            case 3: tampilkanPenulisTertentu(); break;
            case 4: jumlahBukuJudul(); break;
            case 5: totalBuku(); break;
            case 6: terbitkanBuku(); break;
            case 0: cout << "Keluar...\n"; break;
            default: cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 0);

    return 0;
}

