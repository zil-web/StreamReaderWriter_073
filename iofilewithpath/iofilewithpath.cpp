#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "masukkan nama file :";
	cin >> NamaFile;
	
	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunjukkan ke subuah nama file
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">=menulis file, \'q'\ untuk keluar" << endl;
	 
	//unlimited loop untuk menulis 
	while (true) {
		cout << "_ ";
		//mendapatkkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan q
		if (baris == "q") break;
		//menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile.close();

		//membuka file dalam mode membaca
		ifstream infile;

		//menunjuk ke sebuah file
		infile.open(NamaFile, ios::in);

		cout << endl << ">= membuka dan membaca file" << endl;
		//jika file ada maka
		if (infile.is_open())
		{
			//melakukkan perulangan setiap baris 
			while (getline(infile, baris))
			{
				// dan tampilkkan disini
				cout << baris << '\n';
			}
			//tutup file tersebut setelah selesai
		}
	}
}