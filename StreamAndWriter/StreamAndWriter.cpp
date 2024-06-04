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
}