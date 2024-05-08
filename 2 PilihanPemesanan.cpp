#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include <vector>

using namespace std;

struct Member {
	string nama;
	string email;
	int noTelp;
	string alamat;
	string password;
};

extern void CreateMember();
extern void RunMenu();
extern vector<Member> memberDatabase;
extern Member member;
int PilPesanan, NoMeja;

void PilihanPemesanan() {
	string AlamatKirim;
	
    cout << "=================== JENIS PEMESANAN ===================\n";
    cout << "[1] Dine In \n";
    cout << "[2] Take Away \n";
    cout << "[3] Delivery \n";
    cout << "MASUKKAN PILIHAN PEMESANAN = "; cin >> PilPesanan;
    cout << "_______________________________________________________\n";

    switch (PilPesanan) {
        case 1: {
            cout << "PILIHAN PEMESANAN	= DINE IN \n";
            cout << "Masukkan nomor meja	= "; cin >> NoMeja;

            if (NoMeja < 1 || NoMeja > 100) {
            cout << "Nomor meja tidak valid.\n";
			} else {
                cout << "Nomor Meja 		= " << NoMeja << endl;
			}
            break;
        }
        case 2: {
            cout << "PILIHAN PEMESANAN = TAKE AWAY \n";
            cout << "Pesanan akan dibawa pulang \n";
            break;
        }
        case 3: {
            cout << "PILIHAN PEMESANAN 		= DELIVERY \n";
            if (!member.alamat.empty()) {
            	cout << "Alamat pengiriman 			= " << member.alamat << "\n";
            } else {
            	cout << "Masukkan alamat pengiriman	= ";
            	cin.ignore(); getline(cin, AlamatKirim);	
            }
            cout << "Ongkir				= Rp. 10.000 \n";
            
            member.alamat = AlamatKirim;
            break;
        }
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }
    
    system("pause");
    system("cls");
}



