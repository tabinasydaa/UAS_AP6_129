#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string jurusan;
};

vector<Mahasiswa> dataMahasiswa;

void tambahData() {
    Mahasiswa mhs;
    cout << "Masukkan Nama: ";
    getline(cin.ignore(), mhs.nama);
    cout << "Masukkan NIM: ";
    getline(cin, mhs.nim);
    cout << "Masukkan Jurusan: ";
    getline(cin, mhs.jurusan);
    dataMahasiswa.push_back(mhs);
    cout << "Data mahasiswa berhasil ditambahkan!" << endl;
}

void tampilkanData() {
    if (dataMahasiswa.empty()) {
        cout << "Tidak ada data mahasiswa." << endl;
    } else {
        cout << "Data Mahasiswa: " << endl;
        for (const Mahasiswa& mhs : dataMahasiswa) {
            cout << "Nama: " << mhs.nama << endl;
            cout << "NIM: " << mhs.nim << endl;
            cout << "Jurusan: " << mhs.jurusan << endl;
            cout << "---------------------------" << endl;
        }
    }
}

void updateData() {
    string nim;
    cout << "Masukkan NIM mahasiswa yang akan diupdate: ";
    getline(cin.ignore(), nim);

    bool found = false;
    for (Mahasiswa& mhs : dataMahasiswa) {
        if (mhs.nim == nim) {
            cout << "Masukkan Nama Baru: ";
            getline(cin, mhs.nama);
            cout << "Masukkan NIM Baru: ";
            getline(cin, mhs.nim);
            cout << "Masukkan Jurusan Baru: ";
            getline(cin, mhs.jurusan);
            cout << "Data mahasiswa berhasil diupdate!" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Data mahasiswa tidak ditemukan!" << endl;
    }
}

void hapusData() {
    string nim;
    cout << "Masukkan NIM mahasiswa yang akan dihapus: ";
    getline(cin.ignore(), nim);

    for (auto it = dataMahasiswa.begin(); it != dataMahasiswa.end(); ++it) {
        if (it->nim == nim) {
            dataMahasiswa.erase(it);
            cout << "Data mahasiswa berhasil dihapus!" << endl;
            return;
        }
    }

    cout << "Data mahasiswa tidak ditemukan!" << endl;
}

int main() {
    int pilihan;

    do {
        cout << "Program Data Mahasiswa (CRUD)" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Hapus Data" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        cin.ignore();

        switch (pilihan) {
            case 1:
                tambahData();
                break;
            case 2:
                tampilkanData();
                break;
            case 3:
                updateData();
                break;
            case 4:
                hapusData();
                break;
            case 5:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi!" << endl;
        }

        cout << endl;

    } while (pilihan != 5);

    return 0;
}
