#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private :
    int nim;
    string nama;
public:
    Mahasiswa();
    Mahasiswa(int);
    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama);
    void cetak();

};

Mahasiswa::Mahasiswa() {
    nim = 0;
    nama = "";
}
int main()
{
    std::cout << "Hello World!\n";
}

