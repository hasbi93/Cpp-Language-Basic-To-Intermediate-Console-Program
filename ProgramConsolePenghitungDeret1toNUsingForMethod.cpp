#include<iostream>

using namespace std;

int main()
{
	long int i,j,n;
	j=0;
	cout<<"Program Penjumlah Deret Bilangan 1 to N \n";
	cout<<"Masukkan N Pengulangan yang Anda Inginkan: \n";
	cin>>n;
	for(i=1;i<=n;i=i+1)
	{
		j=j+i;
	}
	cout<<"Jumlah Deret Bilangan = "<<j<<"\n";
	cout<<"Now Using While Method \n";
	cout<<"Masukkan N Pengulangan yang Anda Inginkan: \n";
	cin>>n;
	j=0;
	i=1;
	while(i<=n && i>=0)
	{
		j=j+i;
		i=i+1;
	}
	cout<<"Jumlah Deret Bilangan = "<<j<<"\n";
	cout<<"Now Using Repeat Method \n";
	cout<<"Masukkan N Pengulangan yang Anda Inginkan: \n";
	cin>>n;
	j=0;
	i=1;
	do
	{
		j=j+i;
		i=i+1;
	}while(i<=n && i>=0);
	cout<<"Jumlah Deret Bilangan = "<<j<<"\n";
	return 0;
}
