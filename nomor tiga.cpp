#include<iostream>
using namespace std;

struct data_tanggal
{
    int tahun;
    int tanggal;
    int bulan;
};

struct data_tempat
{
    char provinsi[25];
    char kota[15];
    char jalan[40];
};

struct data_pelajar
{
    char nama[30];
    char nim[10];
    data_tanggal lahir;
    data_tempat alamat;
};

int main()
{
    data_pelajar mahasiswa;
    mahasiswa.lahir.tahun=2004;
    mahasiswa.lahir.tanggal=9;
    mahasiswa.lahir.bulan=9;
  
    system("cls");
    cout << "Masukkan data diri anda" << endl;
    cout << "Nama       : "; cin >> mahasiswa.nama;
    cout << "NIM        : "; cin >> mahasiswa.nim;
    cout << "Provinsi   : "; cin >> mahasiswa.alamat.provinsi;
    cout << "Kota       : "; cin >> mahasiswa.alamat.kota;
    cout << "Jalan      : "; cin >> mahasiswa.alamat.jalan;  
    cout << endl;
    
    system("cls");
    cout << "Nama       : " << mahasiswa.nama << endl;
    cout << "NIM        : " << mahasiswa.nim << endl;
    cout << "Provinsi   : " << mahasiswa.alamat.provinsi << endl;
    cout << "Kota       : " << mahasiswa.alamat.kota << endl;
    cout << "Jalan      : " << mahasiswa.alamat.jalan << endl;
    cout << "Tanggal Lahir  : " << mahasiswa.lahir.tanggal << "-" << mahasiswa.lahir.bulan << "-" << mahasiswa.lahir.tahun;
    cout << endl;
  
  return 0;
}
