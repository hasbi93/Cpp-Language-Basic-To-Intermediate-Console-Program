#include<iostream>

using namespace std;

int main()
{
	long int i,j,n,r,x;
	j=0;
	i=1;
	cout<<"Program Penghitung Rerata Deret Bilangan Bulat \n";
	cout<<"Masukkan Jumlah Pengulangan N yang Anda Inginkan: \n";
	cin>>n;
	do
	{
		cout<<"Masukkan Angka yang Ingin Anda Tambahkan: \n";
		cin>>x;
		j=j+x;
		i=i+1;
		cout<<"Jumlah Sementara = "<<j<<"\n";
	}while(i<=n);
	r=j/n;
	cout<<"Jumlah Rerata = "<<r;
	return 0;
}
