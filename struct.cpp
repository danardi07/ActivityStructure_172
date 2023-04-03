#include <iostream>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
	
};

int main()
{
	Mahasiswa mhs1, mhs2;
	
	mhs1.nim = "20220140172";
	mhs1.nama = "Danar";
	mhs1.alamat = "Kasihan";
	mhs1.umur = 20;

	cout << "masukan nim: ";
	cin >> mhs2.nim;
	cout << "masukan nama: ";
	cin >> mhs2.nama;
	cout << "masukan alamat: ";
	cin >> mhs2.alamat;
	cout << "masukan umur: ";
	cin >> mhs2.umur;

	cout << "\nNim : " << mhs1.nim;
	cout << "\nNama : " << mhs1.nama;
	cout << "\nAlamat : " << mhs1.alamat;
	cout << "\nUmur : " << mhs1.umur;

	cout << "\nNim : " << mhs2.nim;
	cout << "\nNama : " << mhs2.nama;
	cout << "\nAlamat : " << mhs2.alamat;
	cout << "\nUmur : " << mhs2.umur;

	 
}