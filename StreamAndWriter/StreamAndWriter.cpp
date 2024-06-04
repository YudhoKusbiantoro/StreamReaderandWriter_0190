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
}