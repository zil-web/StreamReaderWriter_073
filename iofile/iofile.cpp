#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int  main() {
	string baris;
	//membuka file dalam mode menulis 
	ofstream outfile;
	//menunjuksebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= menulis file, \'q'\ untuk keluar " << endl;
	// unlimited loop untuk menulis
	while (true) {
		cout << "_ ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akanberhenti jika anada memasukkan karakter q
		if (baris == "q") break;
		// menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	// selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//membuka file dalam mode membaca
	ifstream infile;
	//menunjuakkan ke sebuah file
	infile.open("contohfile.txt");

	cout << endl << ">= membuka dan membaca file" << endl;
	// jika file ada maka
	if (infile.is_open())
	{
		//melakukkan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan disini
			cout << baris << '\n';
		}
		//tutup file tersebut setelah selesai
		infile.close();
	}
	//jika tidak menemukan file maka akan menampilkkan ini
	else cout << "unable to open file";
	return 0;
}