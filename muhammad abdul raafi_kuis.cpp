//muhammad abdul raafi
//21.11.3867
//21 if 01

#include <iostream>
using namespace std;
int main() {
    int *n;
    int input;
    
    cout << "\tMasukkan nilai\t: ";
    cin >> input;
    n = &input;
    
    if(*n >= 90 && *n <= 100)
    {
        cout << "A\n";
    } else if(*n >= 80 && *n < 90)
    {
        cout << "B\n";    
    } else if(*n >= 70 && *n < 80)
    {
        cout << "C\n";    
    } else if(*n >= 60 && *n < 70)
    {
        cout << "D\n";    
    } else if (*n >= 50 && *n < 60)
    {
        cout << "E\n";
    }
    else if (*n >= 0 && *n < 50)
    {
        cout << "Tidak lulus\n";
    }
    else
    {
        cout << "Nilai tidak ditemukan\nBatas nilai 0 -100\n";
    }
    
    
    return 0;
}

