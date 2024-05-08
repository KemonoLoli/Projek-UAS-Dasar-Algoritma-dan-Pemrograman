#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include <vector>

using namespace std;

extern double total_sementara;
extern TampilanAkhir();
double diskon;
int viapembayaran;

void MetodePembayaran() {
	string kode_promo;
	int metode;
	
	bool promo=true;
	
	while (promo==true) {
	int pilihanpromo;
	
	cout << "================== METODE PEMBAYARAN ==================\n" << endl;
	cout << "Apakah anda memiliki kode potongan harga? \n";
	cout << "[1] Ya \n";
	cout << "[2] Tidak \n";
	cout << "Pilih opsi = "; cin >> pilihanpromo;

		switch (pilihanpromo) {
			case 1: {
				cout << "Silahkan masukkan kode potongan harga = \n"; cin >> kode_promo;
				
				if (kode_promo == "DISKONDONG") {
					diskon = total_sementara * 0.15;
					cout << "Promo berhasil dipakai!\n";
					promo = false;
					system("pause");
					system("cls");
				} 
				if (kode_promo == "CARIDISKON") {
					diskon = total_sementara * 0.25;
					cout << "Promo berhasil dipakai!\n";
					promo = false;
					system("pause");
					system("cls");
				} 
				if (kode_promo == "AKUBOKEK") {
					diskon = total_sementara - 15000;
					cout << "Promo berhasil dipakai!\n";
					promo = false;
					system("pause");
					system("cls");
				} 
				if (kode_promo == "GAMODAL") {
					diskon = total_sementara - 25000;
					cout << "Promo berhasil dipakai!\n";
					promo = false;
					system("pause");
					system("cls");
				} 
				if (kode_promo == "TAMBAHSATU") {
					cout << "Anda mendapatkan 1 Vanilla Ice cream!\n";
					promo = false;
					system("pause");
					system("cls");
				} else {
					cout << "Kode tidak valid, mohon coba lagi \n";
					system("pause");
					system("cls");
				}
				break;
			}	
			case 2: {
				cout << "Lanjut transaksi tanpa potongan harga \n";
				promo = false;
				system("pause");
				system("cls");
				break;
				}
		}
	}

	while (metode==0) {
	
	cout << "================== METODE PEMBAYARAN ==================\n" << endl;
	cout << " Silahkan Selesaikan Transkasi Dengan Langkah Berikut \n" << endl;

	cout << "[1] Virtual Account \n";
	cout << "[2] E-Wallet \n";
	cout << "[3] Cash \n";
	cout << "Pilih opsi = "; cin >> viapembayaran;

		switch (viapembayaran) {
			case 1: {
				cout << "Virtual Account \n";
				cout << "Silahkan lakukan pembayaran Ke BSI(7198987478) a.n : Lutharti\n";
				cout << "Ketik 0 untuk kembali / 1 untuk lanjut : "; cin>>metode;
				system("cls");
				break;
			}
			case 2: {
				cout << "E-Wallet \n";
				cout << "Silahkan lakukan pembayaran Ke no. 081511980399 a.n : Lutharti \n";
				cout << "(Kami menerima semua jenis E-Wallet)\n";
				cout << "Ketik 0 untuk kembali / 1 untuk lanjut : "; cin>>metode;
				system("cls");
				break;
			}
			case 3: {
				cout << "Cash \n";
				cout << "Jangan lupa siapkan uangnya ya! (^-^) \n";
				cout << "Ketik 0 untuk kembali / 1 untuk lanjut : "; cin>>metode;
				system("cls");
				break;
			}
		}	
	} TampilanAkhir();
	
}

