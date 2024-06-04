#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//Nama repo: StreamReaderandWriter_0190
//Commit minimal : 10 commit

int main() {

	//untuk menyimpan data berbentuk string
	string baris;

	//Membuka file dalam mode menulis
	ofstream outfile;

	//Menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q' untuk keluar " << endl;

	//Unlimited  loop untuk menulis
	while (true) {
		cout << "_";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika dimasukan karakter q
		if (baris == "q") break;
		//menulis dan memasukan nilai dari 'baris' ke dalamm file
		outfile << baris << endl;
	}

	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//Membuka file dalam mode membaca
	ifstream infile;
	//Menunjuk ke sebuah file
	infile.open("contohfile.txt");

	cout << endl << ">= Membuka dan Membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//Melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//Dan tampilkan di sini
			cout << baris << '\n';
		}
		//Tutup file tersebut setelah selesai
		infile.close();
	}
	//Jika tidak ditemukan file maka akan menampilkann ini
	else cout << "Unable to open file";
	return 0;
}