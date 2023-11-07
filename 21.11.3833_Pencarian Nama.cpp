#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i;
	int j;
	string cari;
	int ketemu = 0;
	string array[100];

	cout << "Masukan Nama yang akan di inputkan : ";
	cin >> j;
	cout << endl;

	for (i = 1; i <= j; i++)
	{
		cout << "Masukan nama ke-" << i << " : ";
		cin >> array[i];
	}

	cout << endl;
	cout << "Masukkan Nama yang dicari : ";
	cin >> cari;
	cout << endl;

	for (i = 0; i <= j; i++)
	{
		if (array[i] == cari)
		{
			ketemu = 1;
			cout << "Nama Ditemukan Pada Indeks Ke- " << i << endl;
		}
	}

	if (ketemu == 0)
	{
		cout << "Nama tidak ditemukan";
	}
	_getch();
}
