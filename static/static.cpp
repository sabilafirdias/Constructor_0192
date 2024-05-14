// static.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//nama class harus diawali kapital
class Mahasiswa {

public:
    static int nim;
    int id;
    string nama;

    void setID();
    void printAll();

    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    }
};

int Mahasiswa::nim = 192;       //panggil kelasnya dulu baru objeknya. :: untuk memanggil di luar class



