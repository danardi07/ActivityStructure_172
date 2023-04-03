#include <iostream>

using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa {
	string Nim;
	string Nama;
	AlamatDetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs;

	cout << "masukan Nim: ";
	cin >> mhs.Nim;
	cout << "masukan Nama: ";
	cin >> mhs.Nama;
	cout << "Alamat: " << endl;
	cout << "\tNama Desa : ";
	cin >> mhs.alamat.desa;
	cout << "\tNama Kota : ";             
	cin >> mhs.alamat.kota;
	cout << "masukan Umur : ";
	cin >> mhs.umur;

	cout << "\nNim : " << mhs.Nim;
	cout << "\nNama : " << mhs.Nama;
	cout << "\nDesa : " << mhs.alamat.desa;
	cout << "\nKota : " << mhs.alamat.kota;

}