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
}