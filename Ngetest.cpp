#include <iostream>
#include <string>

using namespace std;

// Struct untuk merepresentasikan informasi stok barang
struct Barang {
    string nama;
    int jumlah;
    double hargaPerBarang;
};

// Fungsi untuk menambah stok barang
void tambahStok(Barang &barang, int jumlahTambah) {
    barang.jumlah += jumlahTambah;
    cout << "Stok barang " << barang.nama << " berhasil ditambah sebanyak " << jumlahTambah << endl;
}

// Fungsi untuk mencetak informasi stok barang
void cetakStok(const Barang &barang) {
    cout << "Informasi Stok Barang:" << endl;
    cout << "Nama Barang: " << barang.nama << endl;
    cout << "Jumlah Barang: " << barang.jumlah << endl;
    cout << "Harga Per Barang: Rp" << barang.hargaPerBarang << endl;
}

int main() {
    // Membuat objek stok barang untuk pensil dan penghapus
    Barang pensil = {"Pensil", 0, 1000};
    Barang penghapus = {"Penghapus", 0, 2000};

    int pilihan;
    cout << "Selamat datang di sistem manajemen stok barang!" << endl;
    cout << "Pilih barang yang ingin Anda tambahkan stoknya:" << endl;
    cout << "1. Pensil" << endl;
    cout << "2. Penghapus" << endl;
    cout << "Pilihan Anda: ";
    cin >> pilihan;

    // Membersihkan buffer input agar tidak terjadi masalah saat pengguna memasukkan string
    cin.ignore();

    Barang &barangPilihan = (pilihan == 1) ? pensil : penghapus;

    // Menampilkan informasi awal stok barang
    cetakStok(barangPilihan);

    // Menambah stok barang
    int jumlahTambah;
    cout << "Masukkan jumlah barang yang ingin ditambahkan: ";
    cin >> jumlahTambah;

    tambahStok(barangPilihan, jumlahTambah);

    // Menampilkan informasi stok barang setelah penambahan
    cetakStok(barangPilihan);

    return 0;
}
