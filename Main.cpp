#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include <vector>
#include <limits>

using namespace std;

extern void CreateMember();
extern bool LoginMember();
extern void MainMenu();
extern void PilihanPemesanan();
extern void RunMenu();
extern void RunKeranjang();
extern void MetodePembayaran();
extern void TampilanAkhir();

struct Member {
	string nama;
	string email;
	int noTelp;
	string alamat;
	string password;
};

extern vector<Member> memberDatabase;
extern Member member;
	

void MainMenu() {
	int pilih;
	
	do{
	cout << "====================== MAIN MENU ======================\n";
    cout << "Welcome, " << member.nama << "!\n";
    cout << "1. View Profile\n";
    cout << "2. Make an Order\n";
    cout << "3. Logout\n";
    cout << "Masukkan Pilihan = "; cin >> pilih;

    system("pause");
    system("cls");

    switch (pilih) {
        case 1 : {
            char back;
            cout << "======================= PROFILE =======================\n";
            cout << "Full Name       = " << member.nama << endl;
            cout << "Email           = " << member.email << endl;        
			cout << "Phone Number    = " << member.noTelp << endl;
            cout << "Address         = " << member.alamat << endl;
            cout << "Press 'x' to go back to the main menu: "; cin >> back;
		    if (back == 'x' || back == 'X') {
			break;
        	}
        }
        case 2 :
          	PilihanPemesanan();
          	RunMenu();
           	break;
        case 3 : {
           	cout << "Goodbye!" << endl;
			break;
		}
		default :	
			cout << "Pilihan tidak valid." << endl;
			break;
   	}
	} while (pilih!=3);
}

int main() {
    cout << "_______________________________________________________\n";
    cout << "            WELCOME TO LUTHARTI RESTAURANT             \n";
    cout << "   Jl.In Aja Dulu Rt.1/Rw.1 Kel.Yaudah Kec.Pasrah Aja  \n";
    cout << "=======================================================\n" << endl;
      
    bool LoggedIn = false;
    
    while (!LoggedIn) {
    	int pilihanMember;
    	
        cout << "Apakah anda sudah memiliki member? \n";
        cout << "[1] Sudah memiliki \n";
        cout << "[2] Belum memiliki \n";
        cout << "Pilih opsi = "; cin >> pilihanMember;

        switch (pilihanMember) {
            case 1:
                if (LoginMember()) {
                    LoggedIn = true;
                    cout << "Login Success!\n";
                    MainMenu();
                } else {
                    cout << "Login failed. Try again!" << endl;
                }
                break;
            case 2: {
                int PilBuatMember;
                cout << "\nApakah anda ingin membuat member?\n";
                cout << "[1] Buat Member\n";
                cout << "[2] Lanjutkan tanpa member\n";
                cout << "Pilih opsi = "; cin >> PilBuatMember;

                system("cls");

                if (PilBuatMember == 1) {
                    CreateMember();
                } else if (PilBuatMember == 2) {
                    string namaPemesan;
                    int noTelepon;

                    cout << "\nContinue Without Member\n";
                    cout << "Masukkan nama pemesan  = "; getline(cin >> ws, namaPemesan);
                    cout << "Masukkan nomor telepon = "; cin >> noTelepon;
                    
					while (noTelepon <= 0){
        			cout << "Masukkan nomor telepon = ";
        			cin >> noTelepon;

        				//if (cin.fail()) { //bisa pakai ini juga atau keduanya digabung
        				if (noTelepon <= 0) {
        				cout << "(Harus dengan angka)" << endl;
        				cin.clear();
        				cin.ignore(100000, '\n');
        				//cin.ignore(numeric_limits<streamsize>::max(), '\n');  //bisa juga pakai ini untuk menghentikan loopingnya, tapi pakai header <limits>
       					}

    				} 
                    
                    member.nama = namaPemesan;
                    member.noTelp 	= noTelepon; 
					
					//system("pause"); buat ss hasil perubahannya aja
                    system("cls");

                    cout << "Welcome, " << namaPemesan << "!" << endl;
                    PilihanPemesanan();
                    RunMenu();
                    LoggedIn = true;
                } else {
                    cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                }
                break;
            }
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                break;
        }
    } return 0;
}


