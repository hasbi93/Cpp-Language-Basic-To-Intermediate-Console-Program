#include<iostream>

using namespace std;

int main()
{
	float harga, hargadiskon,hargaakhir;
	int diskon;
	
	cout<<"Masukkan Total Harga Belanjaan. \n";
	cin>>harga;
	cout<<"Masukkan Besaran Diskon Yang Ada (Ingat Gunakan Hanya Bilangan Bulat Positif, ex:15) \n";
	cin>>diskon;
	if (harga>100000.0)
	{
		hargadiskon=harga*(diskon/100.0),hargaakhir=harga-hargadiskon,cout<<"Selamat Anda Mendapatkan Diskon "<<diskon<<"%, dan total harga belanjaan anda setelah diskon adalah, Rp. "<<hargaakhir;
	}
	else
	{
		cout<<"Maaf anda tidak mendapatkan diskon, total harga belanjaan anda adalah: Rp. \n"<<harga;	
	}
	return 0;
}
