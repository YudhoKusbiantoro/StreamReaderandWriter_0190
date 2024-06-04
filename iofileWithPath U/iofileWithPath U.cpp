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
	//Selesai dalam menulis sekarang tutup filemya
	outfile.close();

	//Membuka file dalam mode membaca
	ifstream infile;

	//Menunjuk ke sebuah file
	infile.open(namaFile + ".txt", ios::in);

	cout << endl << " >= Membuka dan Membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//Melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//Dan tampilkan disini
			cout << baris << '\n';
		}
		//Tutup file tersebut setelai selesai
		infile.close();
	}
	//Jika tidak ditemukan file maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;
}