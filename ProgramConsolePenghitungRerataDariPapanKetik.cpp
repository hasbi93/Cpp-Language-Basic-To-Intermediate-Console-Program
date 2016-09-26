#include<iostream>

using namespace std;

int main()
{
	long int i,j,x;
	float r;
	i=0;
	j=0;
	cout<<"Program Penghitung Rerata dari Papan Ketik. \n";
	cout<<"Masukkan Angka yang Ingin Anda Jumlahkan: \n";
	cin>>x;
	while(x!=0)
	{
		i=i+1;
		j=j+x;
		cout<<"Masukkan Angka yang Ingin Anda Jumlahkan: \n";
		cout<<"Masukkan Angka 0 Untuk Menghentikan Program \n";
		cin>>x;
	}
	if(i!=0)
	{
		r=(float)j/(float)i;
		cout<<"Rerata = "<<r<<"\n";
	}
	else
	{
		cout<<"Angka yang Anda Masukkan Tidak Ada atau Salah. \n";
	}
	return 0;
}
