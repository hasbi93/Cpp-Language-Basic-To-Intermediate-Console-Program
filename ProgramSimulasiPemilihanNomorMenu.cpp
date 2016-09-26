#include<iostream>

using namespace std;

int main()
{
	long int nomormenu;
	cout<<"Program Simulasi Pemilihan Nomor Menu \n";
	do
	{
		cout<<"MENU \n"	;
		cout<<"1.Baca Data \n";
		cout<<"2.Cetak Data \n";
		cout<<"3.Ubah Data \n";
		cout<<"4.Hapus Data \n";
		cout<<"5.Keluar Program \n";
		
		cin>>nomormenu;
		
		switch(nomormenu)
		{
			case 1:cout<<"Anda Memilih Menu Nomor 1 \n";break;
			case 2:cout<<"Anda Memilih Menu Nomor 2 \n";break;
			case 3:cout<<"Anda Memilih Menu Nomor 3 \n";break;
			case 4:cout<<"Anda Memilih Menu Nomor 4 \n";break;
			case 5:cout<<"Keluar Program  \n";break;
			default:cout<<"Input Anda Salah \n";
		}
	}while(nomormenu!=5);
	return 0;
}
