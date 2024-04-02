#include<iostream>
#include <string>
using namespace std;
struct DetailAlamat {
	string desa;
	string kota;
	string provinsi;
};
struct Mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};
int main() {
	Mahasiswa mhs;
	cout << "Nomor Mahasiswa = ";
	getline(cin, mhs.nim);
	cout << "Nama Mahasiswa = ";
	getline(cin, mhs.nama);
	cout << "Alamat Mahasiswa = " << endl;
	cout << "\t nama Desa = ";
	cin >> mhs.alamat.desa;
	cout << "\t nama Kota = ";
	cin >> mhs.alamat.kota;

}