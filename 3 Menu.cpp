#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include <vector>

using namespace std;

extern void RunKeranjang();

int PilihIndo, PilihKorea, PilihJepang, PilihChina, PilihTambahan, PilihMinuman;
int HargaIndo[5], HargaKorea[5], HargaJepang[5], HargaChina[5], HargaTambahan[5], HargaMinuman[5];
int KuanIndo[5], KuanKorea[5], KuanJepang[5], KuanChina[5], KuanTambahan[5], KuanMinuman[5];
string OpsiIndo[5], OpsiKorea[5], OpsiJepang[5], OpsiChina[5], OpsiTambahan[5], OpsiMinuman[5];
string KetIndo[5], KetKorea[5], KetJepang[5], KetChina[5], KetTambahan[5], KetMinuman[5];
int TKuanIndo[5], TKuanKorea[5], TKuanJepang[5], TKuanChina[5], TKuanTambahan[5], TKuanMinuman[5];
int JumlahIndo, JumlahKorea, JumlahJepang, JumlahChina, JumlahTambahan, JumlahMinuman;
int PilihMenu,i;

void JenisMenu() {
	
	cout << "\t|=====================================================|\n";
    cout << "\t| No.     JENIS MENU                                  |\n";
	cout << "\t|=====================================================|\n";
    cout << "\t| 1.      Menu Indonesia                              |\n";
    cout << "\t| 2.      Menu Korea                                  |\n";
    cout << "\t| 3.      Menu Jepang                                 |\n";
    cout << "\t| 4.      Menu China                                  |\n";
    cout << "\t| 5.      Menu Tambahan     	                      |\n";
    cout << "\t| 6.      Menu Minuman                                |\n";
    cout << "\t|=====================================================|"<<endl;
    cout << "\t Ketik 0 untuk lihat keranjang \n";

    cout<<"Silahkan pilih jenis menu : "; cin>>PilihMenu;
    system("cls");

}

void MenuIndo() {
 	cout << "\t|=====================================================|\n";
    cout << "\t|                 INDONESIAN MENU                     |\n";
    cout << "\t|=====================================================|\n";
    cout << "\t| No.  Menu                          Harga            |\n";
    cout << "\t| 1.   Nasi Goreng                   Rp.25.000        |\n";
    cout << "\t| 2.   Kerak Telor                   Rp.27.000        |\n";
    cout << "\t| 3.   Soto Mie Bogor                Rp.30.000        |\n";
    cout << "\t| 4.   Ayam Betutu                   Rp.20.000        |\n";
    cout << "\t| 5.   Rendang           	     Rp.21.000        |\n";
    cout << "\t|=====================================================|"<<endl;
    cout << "\tKetik 0 untuk kembali \n";
    cout <<endl;
    cout<<"Nomor Menu	= "; cin>>PilihIndo;
    switch (PilihIndo){

		case 0 : {
			break;
		}

		case 1 :{
		OpsiIndo[0]="Nasi Goreng";
        HargaIndo [0]= 25000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanIndo[0];
        TKuanIndo[0]=TKuanIndo[0] + KuanIndo[0];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetIndo[0]);
        JumlahIndo++;
        system("cls");
        break;
        }

        case 2 :{
        OpsiIndo[1]="Kerak Telor";
        HargaIndo [1]= 27000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanIndo[1];
        TKuanIndo[1]=TKuanIndo[1] + KuanIndo[1];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetIndo[1]);
        JumlahIndo++;
        system("cls");
        break;
    	}

    	case 3 :{
    	OpsiIndo[2]="Soto Mie Bogor";
        HargaIndo [2]= 30000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanIndo[2];
        TKuanIndo[2]=TKuanIndo[2] + KuanIndo[2];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetIndo[2]);
        JumlahIndo++;
        system("cls");
        break;
    	}

    	case 4 :{
    	OpsiIndo[3]="Ayam Betutu";
        HargaIndo [3]= 20000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanIndo[3];
        TKuanIndo[3]=TKuanIndo[3] + KuanIndo[3];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetIndo[3]);
        JumlahIndo++;
        system("cls");
        break;
    	}

    	case 5 :{
    	OpsiIndo[4]="Rendang";
        HargaIndo [4]= 21000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanIndo[4];
        TKuanIndo[4]=TKuanIndo[4] + KuanIndo[4];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetIndo[4]);
        JumlahIndo++;
        system("cls");
        break;
    	}

	}

}

void MenuKorea() {
 	cout << "\t|=====================================================|\n";
    cout << "\t|                   KOREAN MENU                       |\n";
    cout << "\t|=====================================================|\n";
    cout << "\t| No.  Menu                          Harga            |\n";
    cout << "\t| 1.   Bibimbap                      Rp.33.000        |\n";
    cout << "\t| 2.   Kimbap                        Rp.21.000        |\n";
    cout << "\t| 3.   Tteobokki               	     Rp.30.000        |\n";
    cout << "\t| 4.   Kimchi                        Rp.12.000        |\n";
    cout << "\t| 5.   Ramyeon           	     Rp.28.000        |\n";
    cout << "\t|=====================================================|"<<endl;
    cout << "\tKetik 0 untuk kembali \n";
    cout <<endl;
    cout<<"Nomor Menu	= "; cin>>PilihKorea;
    switch (PilihKorea){

		case 0 : {
			break;
		}

		case 1 :{
		OpsiKorea[0]="Bibimbap";
        HargaKorea [0]= 33000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanKorea[0];
        TKuanKorea[0]=TKuanKorea[0] + KuanKorea[0];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetKorea[0]);
        JumlahKorea++;
        system("cls");
        break;
        }

        case 2 :{
        OpsiKorea[1]="Kimbap";
        HargaKorea [1]= 21000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanKorea[1];
        TKuanKorea[1]=TKuanKorea[1] + KuanKorea[1];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetKorea[1]);
        JumlahKorea++;
        system("cls");
        break;
    	}

    	case 3 :{
    	OpsiKorea[2]="Tteobokki";
        HargaKorea [2]= 30000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanKorea[2];
        TKuanKorea[2]=TKuanKorea[2] + KuanKorea[2];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetKorea[2]);
        JumlahKorea++;
        system("cls");
        break;
    	}

    	case 4 :{
    	OpsiKorea[3]="Kimchi";
        HargaKorea [3]= 12000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanKorea[3];
        TKuanKorea[3]=TKuanKorea[3] + KuanKorea[3];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetKorea[3]);
        JumlahKorea++;
        system("cls");
        break;
    	}

    	case 5 :{
    	OpsiKorea[4]="Ramyeon";
        HargaKorea [4]= 28000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanKorea[4];
        TKuanKorea[4]=TKuanKorea[4] + KuanKorea[4];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetKorea[4]);
        JumlahKorea++;
        system("cls");
        break;
    	}

	}
}

void MenuJepang() {
 	cout << "\t|=====================================================|\n";
    cout << "\t|                   JAPANESE MENU                     |\n";
    cout << "\t|=====================================================|\n";
    cout << "\t| No.  Menu                          Harga            |\n";
    cout << "\t| 1.   Sushi Set                     Rp.50.000        |\n";
    cout << "\t| 2.   Salmon Sashimi                Rp.42.000        |\n";
    cout << "\t| 3.   Ramen               	     Rp.44.000        |\n";
    cout << "\t| 4.   Yakisoba                      Rp.17.000        |\n";
    cout << "\t| 5.   Takoyaki           	     Rp.24.000        |\n";
    cout << "\t|=====================================================|"<<endl;
    cout << "\tKetik 0 untuk kembali \n";
    cout <<endl;
    cout<<"Nomor Menu	= "; cin>>PilihJepang;
    switch (PilihJepang){

		case 0 : {
			break;
		}

		case 1 :{
		OpsiJepang[0]="Sushi Set";
        HargaJepang [0]= 50000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanJepang[0];
        TKuanJepang[0]=TKuanJepang[0] + KuanJepang[0];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetJepang[0]);
        JumlahJepang++;
        system("cls");
        break;
        }

        case 2 :{
        OpsiJepang[1]="Salmon Sashimi";
        HargaJepang [1]= 42000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanJepang[1];
        TKuanJepang[1]=TKuanJepang[1] + KuanJepang[1];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetJepang[1]);
        JumlahJepang++;
        system("cls");
        break;
    	}

    	case 3 :{
    	OpsiJepang[2]="Ramen";
        HargaJepang [2]= 44000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanJepang[2];
        TKuanJepang[2]=TKuanJepang[2] + KuanJepang[2];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetJepang[2]);
        JumlahJepang++;
        system("cls");
        break;
    	}

    	case 4 :{
    	OpsiJepang[3]="Yakisoba";
        HargaJepang [3]= 17000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanJepang[3];
        TKuanJepang[3]=TKuanJepang[3] + KuanJepang[3];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetJepang[3]);
        JumlahJepang++;
        system("cls");
        break;
    	}

    	case 5 :{
    	OpsiJepang[4]="Takoyaki";
        HargaJepang [4]= 24000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanJepang[4];
        TKuanJepang[4]=TKuanJepang[4] + KuanJepang[4];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetJepang[4]);
        JumlahJepang++;
        system("cls");
        break;
    	}

	}
}

void MenuChina() {
 	cout << "\t|=====================================================|\n";
    cout << "\t|                   CHINESE MENU                      |\n";
    cout << "\t|=====================================================|\n";
    cout << "\t| No.  Menu                          Harga            |\n";
    cout << "\t| 1.   I Fu Mi                       Rp.23.000        |\n";
    cout << "\t| 2.   Fu Yung Hai                   Rp.25.000        |\n";
    cout << "\t| 3.   Dim Sum               	     Rp.17.000        |\n";
    cout << "\t| 4.   Ayam Hainan                   Rp.21.000        |\n";
    cout << "\t| 5.   Bebek Peking           	     Rp.32.000        |\n";
    cout << "\t|=====================================================|"<<endl;
    cout << "\tKetik 0 untuk kembali \n";
    cout <<endl;
    cout<<"Nomor Menu	= "; cin>>PilihChina;
    switch (PilihChina){

		case 0 : {
			break;
		}

		case 1 :{
		OpsiChina[0]="I Fu Mi";
        HargaChina [0]= 23000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanChina[0];
        TKuanChina[0]=TKuanChina[0] + KuanChina[0];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetChina[0]);
        JumlahChina++;
        system("cls");
        break;
        }

        case 2 :{
        OpsiChina[1]="Fu Yung Hai";
        HargaChina [1]= 25000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanChina[1];
        TKuanChina[1]=TKuanChina[1] + KuanChina[1];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetChina[1]);
        JumlahChina++;
        system("cls");
        break;
    	}

    	case 3 :{
    	OpsiChina[2]="Dim Sum";
        HargaChina [2]= 17000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanChina[2];
        TKuanChina[2]=TKuanChina[2] + KuanChina[2];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetChina[2]);
        JumlahChina++;
        system("cls");
        break;
    	}

    	case 4 :{
    	OpsiChina[3]="Ayam Hainan";
        HargaChina [3]= 21000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanChina[3];
        TKuanChina[3]=TKuanChina[3] + KuanChina[3];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetChina[3]);
        JumlahChina++;
        system("cls");
        break;
    	}

    	case 5 :{
    	OpsiChina[4]="Bebek Peking";
        HargaChina [4]= 32000;
        cout<<"Masukkan Jumlah= "; cin>>KuanChina[4];
        TKuanChina[4]=TKuanChina[4] + KuanChina[4];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetChina[4]);
        JumlahChina++;
        system("cls");
        break;
    	}

	}
}

void MenuTambahan() {
 	cout << "\t|=====================================================|\n";
    cout << "\t|                   ADDITIONAL MENU                   |\n";
    cout << "\t|=====================================================|\n";
    cout << "\t| No.  Menu                          Harga            |\n";
    cout << "\t| 1.   Nasi                          Rp.7.000         |\n";
    cout << "\t| 2.   French Fries                  Rp.25.000        |\n";
    cout << "\t| 3.   Pancake               	     Rp.22.000        |\n";
    cout << "\t| 4.   Pancong                       Rp.21.000        |\n";
    cout << "\t| 5.   Banana Split           	     Rp.32.000        |\n";
    cout << "\t|=====================================================|"<<endl;
    cout << "\tKetik 0 untuk kembali \n";
    cout <<endl;
    cout<<"Nomor Menu	= "; cin>>PilihTambahan;
    switch (PilihTambahan){

		case 0 : {
			break;
		}

		case 1 :{
		OpsiTambahan[0]="Nasi";
        HargaTambahan [0]= 7000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanTambahan[0];
        TKuanTambahan[0]=TKuanTambahan[0] + KuanTambahan[0];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetTambahan[0]);
        JumlahTambahan++;
        system("cls");
        break;
        }

        case 2 :{
        OpsiTambahan[1]="French Fries";
        HargaTambahan [1]= 25000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanTambahan[1];
        TKuanTambahan[1]=TKuanTambahan[1] + KuanTambahan[1];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetTambahan[1]);
        JumlahTambahan++;
        system("cls");
        break;
    	}

    	case 3 :{
    	OpsiTambahan[2]="Pancake";
        HargaTambahan [2]= 22000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanTambahan[2];
        TKuanTambahan[2]=TKuanTambahan[2] + KuanTambahan[2];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetTambahan[2]);
        JumlahTambahan++;
        system("cls");
        break;
    	}

    	case 4 :{
    	OpsiTambahan[3]="Pancong";
        HargaTambahan [3]= 21000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanTambahan[3];
        TKuanTambahan[3]=TKuanTambahan[3] + KuanTambahan[3];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetTambahan[3]);
        JumlahTambahan++;
        system("cls");
        break;
    	}

    	case 5 :{
    	OpsiTambahan[4]="Banana Split";
        HargaTambahan [4]= 32000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanTambahan[4];
        TKuanTambahan[4]=TKuanTambahan[4] + KuanTambahan[4];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetTambahan[4]);
        JumlahTambahan++;
        system("cls");
        break;
    	}

	}
}

void MenuMinuman() {
 	cout << "\t|=====================================================|\n";
    cout << "\t|                       DRINKS                        |\n";
    cout << "\t|=====================================================|\n";
    cout << "\t| No.  Menu                          Harga            |\n";
    cout << "\t| 1.   Equil                         Rp.30.000        |\n";
    cout << "\t| 2.   Ocha                          Rp.10.000        |\n";
    cout << "\t| 3.   Lemon Tea               	     Rp.12.000        |\n";
    cout << "\t| 4.   Soju (21+)                    Rp.85.000        |\n";
    cout << "\t| 5.   Espresso           	     Rp.26.000        |\n";
    cout << "\t|=====================================================|"<<endl;
    cout << "\tKetik 0 untuk kembali \n";
    cout <<endl;
    cout<<"Nomor Menu	= "; cin>>PilihMinuman;
    switch (PilihMinuman){

		case 0 : {
			break;
		}

		case 1 :{
		OpsiMinuman[0]="Equil";
        HargaMinuman [0]= 30000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanMinuman[0];
        TKuanMinuman[0]=TKuanMinuman[0] + KuanMinuman[0];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetMinuman[0]);
        JumlahMinuman++;
        system("cls");
        break;
        }

        case 2 :{
        OpsiMinuman[1]="Ocha";
        HargaMinuman [1]= 10000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanMinuman[1];
        TKuanMinuman[1]=TKuanMinuman[1] + KuanMinuman[1];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetMinuman[1]);
        JumlahMinuman++;
        system("cls");
        break;
    	}

    	case 3 :{
    	OpsiMinuman[2]="Lemon Tea";
        HargaMinuman [2]= 12000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanMinuman[2];
        TKuanMinuman[2]=TKuanMinuman[2] + KuanMinuman[2];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetMinuman[2]);
        JumlahMinuman++;
        system("cls");
        break;
    	}

    	case 4 :{
    	OpsiMinuman[3]="Soju";
        HargaMinuman [3]= 85000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanMinuman[3];
        TKuanMinuman[3]=TKuanMinuman[3] + KuanMinuman[3];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetMinuman[3]);
        JumlahMinuman++;
        system("cls");
        break;
    	}

    	case 5 :{
    	OpsiMinuman[4]="Espresso";
        HargaMinuman [4]= 26000;
        cout<<"Masukkan Jumlah	= "; cin>>KuanMinuman[4];
        TKuanMinuman[4]=TKuanMinuman[4] + KuanMinuman[4];
        cout<<"Masukkan keterangan tambahan ('-' jika tidak ada): "; getline(cin >> ws,KetMinuman[4]);
        JumlahMinuman++;
        system("cls");
        break;
    	}

	}
}

void RunMenu(){
	do {
		JenisMenu();

		switch (PilihMenu){
			case 1 : {
			MenuIndo();
			break;
			}
			case 2 : {
			MenuKorea();
			break;
			}
			case 3 : {
			MenuJepang();
			break;
			}
			case 4 : {
			MenuChina();
			break;
			}
			case 5 : {
			MenuTambahan();
			break;
			}
			case 6 : {
			MenuMinuman();
			break;
			}
		}
	}
	while (PilihMenu!=0);
	RunKeranjang();
}

