#include<iostream>

using namespace std;

int main()
{
	long int i,n;
	i=1;
	cout<<"Masukkan Jumlah Pengulangan yang Anda Inginkan: \n";
	cin>>n;
	do
	{
		cout<<i<<"\n";
		i=i+1;
	}while(i<=n);
	return 0;
}
