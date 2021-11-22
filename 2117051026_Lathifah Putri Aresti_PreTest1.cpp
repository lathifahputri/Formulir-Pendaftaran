#include <iostream>
using namespace std;
int main(){
	
	/*Nama  : Lathifah Putri Aresti
	  NPM   : 2117051026
	  Kelas : D
	  */
	  
	cout << "FORMULIR PENDAFTARAN" << endl;
	cout << "Gang Lampung Manji" << endl;
	cout << "--------------------" << endl;
	
	
	//Input//
	string nama;
	string nomor_hp;
	string alamat;
	string alasan_mendaftar;
	
	cout << "Masukkan nama anda : ";
	getline(cin,nama);
	cout << "Masukkan nomor hp anda : ";
	getline(cin,nomor_hp);
	cout << "Masukkan alamat anda : ";
	getline(cin,alamat);
	cout << "Masukkan alasan mendaftar : ";
	getline(cin,alasan_mendaftar);
	cout << "--------------------------" << endl;
	
	//Output//
	cout << "Nama Pendaftar = " << nama << endl;
	cout << "Nomor HP Pendaftar = " << nomor_hp << endl;
	cout << "Alamat Pendaftar = " << alamat << endl;
	cout << "Alasan Mendaftar = " << alasan_mendaftar << endl;
	cout << endl;
	cout << "TERIMA KASIH TELAH MENDAFTAR DI GANG LAMPUNG MANJI" << endl;
	
	return 0;
}
