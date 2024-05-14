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

void Mahasiswa::setID() {
    id = ++nim;
}

void Mahasiswa::printAll() {
    cout << "ID   = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Asroni");
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4("Joko Purbo");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    system("pause");

    return 0;

}

