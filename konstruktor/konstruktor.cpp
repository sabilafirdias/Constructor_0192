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


