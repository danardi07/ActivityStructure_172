#include <iostream>

using namespace std;

struct AlamatDetail
{
	char desa[20];
	char kota[20];

};

struct Mahasiswa {
	char nim[12];
	char nama[20];
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "masukan nim : ";
		cin.getline(mhs[i].nim, 12);
		cout << "masukan nama : ";
		cin.getline(mhs[i].nama, 20);
		cout << "Alamat : " << endl;
		cout << "\nNama Desa : ";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\Nama Kota : ";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "masukan Umur : ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "\nNim : " << mhs[i].nim;
		cout << "\nNama : " << mhs[i].nama;
		cout << "\nDesa : " << mhs[i].alamat.desa;
		cout << "\nKota : " << mhs[i].alamat.kota;
		cout << "\nUmur : " << mhs[i].umur;
		
	}
}