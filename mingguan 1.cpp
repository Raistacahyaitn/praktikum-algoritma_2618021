#include <iostream>
using namespace std;

int main() {
	string nama, nim, kelas;
	int semester,ipk;
	
	cout << "PRAKTIKUM ALGORITMA 2026\n\n";
	
	cout << "Masukan nama	: ";
	cin >> nama;
	cout << "masukan nim	: ";
	cin >> nim;
	cout << "masukan kelas	: ";
	cin >> kelas;
	cout << "semester	: ";
	cin >> semester;
	cout << "masukan ipk	: ";
	cin >> ipk;
	
	cout << "\nBIODATA SISWA\n";
	cout << "==================\n";
	cout << "nama		: " << nama << endl;
	cout << "nim		: " << nim << endl;
	cout << "kelas		: " << kelas << endl;
	cout << "semester	: " << semester << endl;
	cout << "ipk		: " << ipk << endl;

return 0;
}

