#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include <vector>
#include <limits>

using namespace std;

struct Member {
	string nama;
	string email;
	int noTelp;
	string alamat;
	string password;
};

vector<Member> memberDatabase;
Member member;

void CreateMember() {
	bool LoginMember();
	
	cout << "==================== CREATE MEMBER ====================\n";
    cout << "Masukkan Nama        : "; getline(cin >> ws, member.nama);
    do {
        cout << "Masukkan Email       : ";
        getline(cin >> ws, member.email);

        if (member.email.size() >= 10 && member.email.substr(member.email.size() - 10) == "@gmail.com") {
            break;
        } else {
            cout << "Alamat email harus diakhiri dengan @gmail.com." << endl;
        } 
    } while (member.email.size()<10);

    
    while (member.noTelp <= 0) {
        cout << "Masukkan No. Telepon : ";
        cin >> member.noTelp;

        //if (cin.fail()) { //bisa pakai ini juga atau keduanya digabung
        if (member.noTelp <= 0) {
        	cout << "(Harus dengan angka)" << endl;
        	cin.clear();
        	cin.ignore(100000, '\n');
        	//cin.ignore(numeric_limits<streamsize>::max(), '\n');  //bisa juga pakai ini untuk menghentikan loopingnya, tapi pakai header <limits>
        }

    }
    
    cout << "Masukkan Alamat      : "; getline(cin >> ws, member.alamat);
    cout << "Masukkan Password    : "; cin >> member.password;

	memberDatabase.push_back(member);
	
	cout << "Member Successfully Created!\n";
	
	system("pause");
	system("cls");
	
	LoginMember();
}

bool LoginMember() {
	void CreateMember();
	extern void MainMenu();
	string email, password;
	
	cout << "======================== LOGIN ========================\n";
    cout << "Masukkan Email      : "; cin >> email;
    cout << "Masukkan Password   : "; cin >> password;
	
        if (member.email == email && member.password == password) {
            cout << "Login successful!\n";
            system("pause");
            system("cls");
            MainMenu();
            return true;
        }

	cout << "Login failed. Email or password is not valid.\n";
    return false;
}
