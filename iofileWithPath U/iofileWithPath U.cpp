#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	stirng baris;
	string namaFile;

	cout << "Masukan Nama File : ";
	cin >> NamaFile;

	//Membuka file dalam mode menulis
	ofstream outfile;
	//Menunjuk ke sebuah nama file
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar " << endl;
}