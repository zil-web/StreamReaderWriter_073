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
	}
}