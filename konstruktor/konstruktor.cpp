// konstruktor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    int nim;
    string nama;
public:
    mahasiswa();
    mahasiswa(int a) {
        nim = a;
    };
    mahasiswa(string b) {
        nim = 0;
        nama = b;
    };
    mahasiswa(int iNim, string iNama);
    void cetak();
};

mahasiswa::mahasiswa() {
    nim = 0;
    nama = "";
}

mahasiswa::mahasiswa(int iNim, string iNama) {
    nim = iNim;
    nama = iNama;
}

void mahasiswa::cetak() {
    cout << endl << "Nim = " << nim << endl;
    cout << " Nama = " << nama << endl;
}

int main()
{
    mahasiswa mhs1;
    mahasiswa mhs2(20);
    mahasiswa mhs3("Indra");
    mahasiswa mhs4(30, "Fauzan");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();
}
