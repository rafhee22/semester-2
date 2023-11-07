#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{

    struct D3
    {
        int spp_tetap = 1000000;
        int spp_var = 50000;
    } d;

    struct S1
    {
        int spp_tetap = 1750000;
        int spp_var = 150000;
    } s;

    int key, sks;

    cout << ".: PROGRAM MEMBAYAR SPP :." << endl;
    cout << "--------------------------" << endl;
    cout << "Pilih [1] untuk Program Studi D3" << endl;
    cout << "Pilih [2] untuk Program Studi S1" << endl;
    cout << "Pilih: ";
    cin >> key;
    cout << endl;

    if (key == 1)
    {
        cout << ".: Pembayaran SPP Program Studi D3 :." << endl;
        cout << "Harga SPP Tetap    Rp 1.000.000,-" << endl;
        cout << "Harga SPP Variabel Rp 50.000,-/sks" << endl;
        cout << endl;
        cout << "Ingin mengambil berapa sks(max 24)? : ";
        cin >> sks;
        cout << "Total tagihan anda Rp " << sks * d.spp_var + d.spp_tetap << ",-" << endl;
    }
    else if (key == 2)
    {
        cout << ".: Pembayaran SPP Program Studi S1 :." << endl;
        cout << "Harga SPP Tetap    Rp 1.750.000,-" << endl;
        cout << "Harga SPP Variabel Rp 150.000,-/sks" << endl;
        cout << endl;
        cout << "Ingin mengambil berapa sks(max 24)? : ";
        cin >> sks;
        cout << "Total tagihan anda Rp " << sks * s.spp_var + s.spp_tetap << ",-" << endl;
    }
    else
    {
        cout << "Maaf, pilihan anda tidak tersedia." << endl;
    }

    getch();
    return 0;
}