#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) {
        nim = pnim;

    }
};
int main()
{
    std::cout << "Hello World!\n";
}


