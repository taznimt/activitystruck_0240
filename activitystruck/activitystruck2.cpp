#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
	string  provinsi;
};

struct mahasiswa(){
	string nim;
	string nama;
	DetailAlamat alamat;
	string umur;
}
int main() {
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa : ";
    cin >> mhs.alamat;
    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur;
}

