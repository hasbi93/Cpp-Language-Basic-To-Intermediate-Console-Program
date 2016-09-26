#include<iostream>

using namespace std;

int main()
{
	char c[99];
	long int i,n;
	i=1;
	n=0;
	cout<<"Program Console Cetak Data Hasil Input Pada Layar Komputer \n";
	cout<<"Masukkan Jumlah N Pengulangan Input Data yang Anda Inginkan: \n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	cout<<"Masukkan Karakter yang Ingin Anda Cetak di Layar Komputer: \n";
	cin>>c;
	cout<<"Karakter Anda adalah : "<<c<<"\n";
	i=i+1;
	}
	return 0;
}
