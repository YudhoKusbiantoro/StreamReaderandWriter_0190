#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string namaFile;

	cout << "Masukan Nama File : ";
	cin >> namaFile;

	//Membuka file dalam mode menulis
	ofstream outfile;
	//Menunjuk ke sebuah nama file
	outfile.open(namaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar " << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "_";
		//Mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika  anda memasukan karakter q 
		if (baris == "q") break;
		//menulis dan memasukan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
}