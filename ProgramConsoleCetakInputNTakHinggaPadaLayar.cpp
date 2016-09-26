#include<iostream>

using namespace std;

int main()
{
	long int i;
	char c[99];
	i=1;
	
	cout<<"Program Console Pencetak Input Data Tak Hingga pada Layar \n";
	cout<<"Masukkan Karakter yang Ingin Anda Cetak di Layar \n";
	cin>>c;
	while(i!=0)
	{
		cout<<"Input Data Anda adalah :"<<c<<"\n";
		cout<<"Masukkan Angka 0 Untuk Mengakhiri Program dan Selain 0 Untuk Meneruskan: \n";
		cin>>i;
		cout<<"Masukkan Data yang Ingin Anda Cetak di Layar: \n ";
		cin>>c;
	}
	return 0;
}
