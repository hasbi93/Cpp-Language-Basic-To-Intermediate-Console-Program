#include<iostream>

using namespace std;

int main()
{
	long int n,i,j;
	cout<<"Masukkan Jumlah Pengulangan yang Anda Inginkan untuk Dijumlahkan: \n";
	cin>>n;
	j=0;
	i=1;
	do
	{
		j=j+i;
		i=i+1;
	}while(i<=n);
	cout<<"Jumlah = "<<j;
	return 0;
}
