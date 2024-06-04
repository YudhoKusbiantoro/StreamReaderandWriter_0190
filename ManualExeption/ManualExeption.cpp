#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		//throw 0.5; //Melemparkan sebuah integer maka
		cout << "Pernyataan tidak di eksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan diekseksui
		cout << "Pengecualian akan di eksekusi" << endl;
	}
	catch(...) {
		/*jika selain integer maka  blok ini akan di eksekusi*/
		cout << "default pengecualian dieksekusi" << endl;
	}

	return 0;
}