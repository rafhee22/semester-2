#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct nim
{
	int tahun[5];
	string prodi[5];
	string nomor[5];
};

struct mahasiswa
{
	nim nim;
	string nama[5];
	string alamat[5]; 
	float ipk[5];

};

int main()
{
	cout << "Author	: muhammad abdul raafi"<<endl;
	cout << "NIM 	: 21.11.3867 "<<endl;
	cout << "Kelas 	: 21 IF 01 "<<endl;
	cout <<endl;
	cout <<endl;
	cout <<endl;
	
	mahasiswa mhs;
	for (int i = 0; i <= 2; i++) {
		cout << "Tahun   : ";
		cin >> mhs.nim.tahun[i];
		cin.ignore();
		cout << "Prodi   : "; 
		getline(cin, mhs.nim.prodi[i]);
		cout << "Nomor   : "; 
		cin >> mhs.nim.nomor[i];
		cin.ignore();
		cout << "Nama    : "; 
		getline(cin, mhs.nama[i]);
		cout << "Alamat  : "; 
		getline(cin, mhs.alamat[i]);
		cout << "IPK     : "; 
		cin >> mhs.ipk[i];
		cout << endl;
	}
	cout << "Data yang anda masukkan ";
	cout << "\n************";
	for (int i = 0; i <= 2; i++) {
		cout << "\nTahun        : " << mhs.nim.tahun[i] << endl;
		cout << "Prodi          : " << mhs.nim.prodi[1] << endl;
		cout << "Nomor          : " << mhs.nim.nomor[1] << endl;
		cout << "Nama           : " << mhs.nama[i] << endl;
		cout << "Alamat lengkap : " << mhs.alamat[i] << endl;
		cout << "IPK            : " << mhs.ipk[i] << endl;
	}
 return 0;
}
