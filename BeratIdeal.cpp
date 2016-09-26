#include<iostream>

using namespace std;

int main()
{
	long int berat, berat0, tinggi, tinggi0,idealatas,idealbawah;
	cout<<"Untuk Mengetahui Berat Ideal Anda,\nMasukkan Tinggi Badan Anda: \n";
	cin>>tinggi;
	cout<<"Masukkan Berat Badan Anda Saat Ini: \n";
	cin>>berat0;
	tinggi0=tinggi-100;
	berat=tinggi0-(tinggi0*0.1);
	cout<<"Berat ideal anda adalah: "<<berat<<" Kg. \n";
	idealatas=berat+2;
	idealbawah=berat-2;
	if(berat0<=(idealatas)&&berat0>=(idealbawah))
		{
			cout<<"Berat Badan Anda Sudah Ideal. \n";
		}
	else
		{
			cout<<"Berat Badan Anda Belum Ideal. \n";
		}
	return 0;
}
