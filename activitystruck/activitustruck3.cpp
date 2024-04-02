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

}