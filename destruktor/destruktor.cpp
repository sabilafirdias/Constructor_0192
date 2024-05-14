// destruktor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class angka {
private:
    int* arr;
    int panjang;
public:
    angka(int); //constructor
    ~angka();   //destructor
    void cetakData();
    void isiData();
};

//definisi member function
angka::angka(int i) {       //constructor
    panjang = i;
    arr = new int[i];
    isiData();
}

angka::~angka() {           //destructor
    cout << endl;
    cetakData();
    delete[]arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}

int main()
{
    std::cout << "Hello World!\n";
}

