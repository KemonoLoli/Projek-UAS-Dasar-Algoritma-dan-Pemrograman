#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include <vector>

using namespace std;

extern void RunMenu();
extern void MetodePembayaran();
int SubIndo[5], SubKorea[5], SubJepang[5], SubChina[5], SubTambahan[5], SubMinuman[5];
extern int HargaIndo[5], HargaKorea[5], HargaJepang[5], HargaChina[5], HargaTambahan[5], HargaMinuman[5];
extern int KuanIndo[5], KuanKorea[5], KuanJepang[5], KuanChina[5], KuanTambahan[5], KuanMinuman[5];
extern string OpsiIndo[5], OpsiKorea[5], OpsiJepang[5], OpsiChina[5], OpsiTambahan[5], OpsiMinuman[5];
extern string KetIndo[5], KetKorea[5], KetJepang[5], KetChina[5], KetTambahan[5], KetMinuman[5];
extern int TKuanIndo[5], TKuanKorea[5], TKuanJepang[5], TKuanChina[5], TKuanTambahan[5], TKuanMinuman[5];
extern int JumlahIndo, JumlahKorea, JumlahJepang, JumlahChina, JumlahTambahan, JumlahMinuman;
double total_sementara;

void keranjang() {
	int a, t;
		
	cout<<"=======================================================================\n";
    cout<<"JUMLAH\tNAMA MENU\t\tHARGA\tSUB TOTAL\n";
    cout<<"=======================================================================\n";
    if (JumlahIndo!=0){
    	for (a=0; a<5;a++){
    		if (TKuanIndo[a]!=0){
    			SubIndo[a]=TKuanIndo[a]*HargaIndo[a];
    			cout<<TKuanIndo[a]<<"\t"<<OpsiIndo[a];
				if (a==4){
					cout<<"\t\t\t";
				}
				else {
					cout<<"\t\t";
				}
				cout<<HargaIndo[a]<<"\t"<<SubIndo[a]<<endl;
    			cout<<"Keterangan: "<<KetIndo[a]<<endl;
			}
		}
    }
    if (JumlahKorea!=0){
    	for (a=0; a<5;a++){
    		if (TKuanKorea[a]!=0){
    			SubKorea[a]=TKuanKorea[a]*HargaKorea[a];
    			cout<<TKuanKorea[a]<<"\t"<<OpsiKorea[a];
				if (a==0 || a==2) {
					cout << "\t\t";
				}
				else {
					cout << "\t\t\t";
				}
				cout<<HargaKorea[a]<<"\t"<<SubKorea[a]<<endl;
    			cout<<"Keterangan: "<<KetKorea[a]<<endl;
			}
		}
    }
    if (JumlahJepang!=0){
    	for (a=0; a<5;a++){
    		if (TKuanJepang[a]!=0){
    			SubJepang[a]=TKuanJepang[a]*HargaJepang[a];
    			cout<<TKuanJepang[a]<<"\t"<<OpsiJepang[a];
				if (a==2){
					cout<<"\t\t\t";
				}
				else {
					cout<<"\t\t";
				}
				cout<<HargaJepang[a]<<"\t"<<SubJepang[a]<<endl;
    			cout<<"Keterangan: "<<KetJepang[a]<<endl;
			}
		}
    }
    if (JumlahChina!=0){
    	for (a=0; a<5;a++){
    		if (TKuanChina[a]!=0){
    			SubChina[a]=TKuanChina[a]*HargaChina[a];
    			cout<<TKuanChina[a]<<"\t"<<OpsiChina[a];
				if (a==0 || a==2) {
					cout << "\t\t\t";
				}
				else {
					cout << "\t\t";
				}
				cout<<HargaChina[a]<<"\t"<<SubChina[a]<<endl;
    			cout<<"Keterangan: "<<KetChina[a]<<endl;
			}
		}
    }
    if (JumlahTambahan!=0){
    	for (a=0; a<5;a++){
    		if (TKuanTambahan[a]!=0){
    			SubTambahan[a]=TKuanTambahan[a]*HargaTambahan[a];
    			cout<<TKuanTambahan[a]<<"\t"<<OpsiTambahan[a];
				if (a==1 || a==4){
					cout<<"\t\t";
				}
				else {
					cout<<"\t\t\t";
				}
				cout<<HargaTambahan[a]<<"\t"<<SubTambahan[a]<<endl;
    			cout<<"Keterangan: "<<KetTambahan[a]<<endl;
			}
		}
    }
    if (JumlahMinuman!=0){
    	for (a=0; a<5;a++){
    		if (TKuanMinuman[a]!=0){
    			SubMinuman[a]=TKuanMinuman[a]*HargaMinuman[a];
    			cout<<TKuanMinuman[a]<<"\t"<<OpsiMinuman[a];
				if (a==2 || a==4){
					cout<<"\t\t";
				}
				else {
					cout<<"\t\t\t";
				}
				cout<<HargaMinuman[a]<<"\t"<<SubMinuman[a]<<endl;
    			cout<<"Keterangan: "<<KetMinuman[a]<<endl;
			}
		}
    }
	
	for (t=0;t<5;t++){
		total_sementara = total_sementara + SubIndo[t] + SubKorea[t] + SubJepang[t] + SubChina[t] + SubTambahan[t]+ SubMinuman[t];
	}
    
    cout<<"Total Harga= "<<total_sementara<<endl;
}

void RunKeranjang(){
    keranjang();
    	int edit, opsi;

    	while (edit==0) {
	    cout << "Silahkan pilih opsi berikut: \n";
	    cout << "[1] Edit/Tambah Menu \n";
		cout << "[2] Lanjut ke Metode Pembayaran \n";
		cout << "Silahkan ketik angka 1-2 \n"; cin >> opsi;

    		switch (opsi) {
    			case 1: {
    				cout << "Silahkan pilih jenis menu yang ingin dirubah/ditambah : \n";
    				cout << "(Masukkan angka minus (-) untuk mengurangi jumlah) \n";
    				cout << "(Contoh = -1)\n";
    				system("cls");
    				RunMenu();
    				break;
				}
				case 2: {
					edit=1;
					system("cls");
					MetodePembayaran();
					break;
				}
			}
		}
}

