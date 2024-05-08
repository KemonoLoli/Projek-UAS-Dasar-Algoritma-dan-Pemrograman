#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include <vector>
#include <conio.h>

using namespace std;

struct Member {
	string nama;
	string email;
	int noTelp;
	string alamat;
	string password;
};

extern Member member;
extern vector<Member> memberDatabase;

extern int JumlahIndo, JumlahKorea, JumlahJepang, JumlahChina, JumlahTambahan, JumlahMinuman;
extern int TKuanIndo[5], TKuanKorea[5], TKuanJepang[5], TKuanChina[5], TKuanTambahan[5], TKuanMinuman[5];
extern string OpsiIndo[5], OpsiKorea[5], OpsiJepang[5], OpsiChina[5], OpsiTambahan[5], OpsiMinuman[5];
extern int HargaIndo[5], HargaKorea[5], HargaJepang[5], HargaChina[5], HargaTambahan[5], HargaMinuman[5];
extern string KetIndo[5], KetKorea[5], KetJepang[5], KetChina[5], KetTambahan[5], KetMinuman[5];
extern int SubIndo[5], SubKorea[5], SubJepang[5], SubChina[5], SubTambahan[5], SubMinuman[5];
extern double total_sementara, diskon;
extern int viapembayaran;
extern int PilPesanan, NoMeja;

void TampilanAkhir(){
	int a=0;
	double ppn, ongkir, sum;

	cout<<endl;
    cout<<"======================================================================\n";
    cout<<"                          LUTHARTI RESTAURANT                         \n";
    cout<<"          Jl.In Aja Dulu Rt.1/Rw.1 Kel.Yaudah Kec.Pasrah Aja          \n";
    cout<<"======================================================================\n" << endl;
    cout<<"Pesanan atas nama	= " << member.nama << endl;
    cout<<"Waktu Pemesanan		= ";
    time_t t;
    struct tm * tt;
    time (&t);
    tt = localtime(&t);
    cout << asctime(tt);
    
    cout<<"Jenis Pesanan		= ";
	
	switch (PilPesanan) {
		case 1 : {
			cout << "Dine In \n";
			break;
		}
		case 2 : {
			cout << "Take Away \n";
			break;
		}
		case 3 : {
			cout << "Delivery \n";
			break;
		}
		default :
			cout << "Pilihan tidak valid." << endl;
            break;
	}
				
	if (PilPesanan == 1) {
		cout << "Nomor meja		= " << NoMeja << endl;
	} else if (PilPesanan == 3) {
		cout << "Alamat pengiriman	= " << member.alamat << endl;
	}

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
    cout<<"=======================================================================\n";
    
    cout << "SUBTOTAL		= Rp. " << fixed << setprecision(0) << total_sementara << endl;
    cout << "Diskon    		= Rp. " << diskon << endl;
    
    total_sementara = total_sementara - diskon;
	ppn = total_sementara*0.11;
    cout << "PPN 11%			= Rp. " << ppn << endl;
        
    sum = total_sementara+ppn;
    
    if (PilPesanan == 3){
    	ongkir = 10000;
		cout<< "ONGKOS KIRIM		= Rp. "<<ongkir<<endl;
		sum = sum+ongkir;
    	cout<< "TOTAL PEMBAYARAN   	= Rp. "<< sum <<endl;
	} else {
    	cout<< "TOTAL PEMBAYARAN   	= Rp. "<< sum <<endl;
	}
	
	
	if (viapembayaran == 1){
	    cout << "METODE PEMBAYARAN  	= Virtual Account \n";	
	} else if (viapembayaran == 2){
	    cout << "METODE PEMBAYARAN  	= E-Wallet \n";		
	} else if (viapembayaran == 3){
	    cout << "METODE PEMBAYARAN  	= Cash On Delivery \n";
	} 

	
    cout<<"=======================================================================\n";
    cout<<"                             THANK YOU!\n";
    cout<<"                         PLEASE COME AGAIN!!!\n\n";
    cout<<"=======================================================================\n";
    cout<<"               DAPATKAN PROMO DAN PENAWARAN MENARIK DENGAN: \n";
    cout<<"                    FOLLOW AKUN SOSIAL MEDIA KAMI\n";
	cout<<"                         @lutharti_official\n";
	cout<<"                    ATAU KUNJUNGI WEBSITE KAMI\n";
	cout<<"                       www.lutharti.co.id\n";
	cout<< endl;
	
	getch();
}

