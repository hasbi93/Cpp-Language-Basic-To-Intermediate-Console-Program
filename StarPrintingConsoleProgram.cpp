#include<iostream>

using namespace std;

int main()
{
	long int i,j,n;
	i=1;
	j=0;
	n=0;
	cout<<"Masukkan Jumlah Pengulangan N Baris yang Anda Inginkan: \n";
	cin>>n;
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=i;++j)
			{
				cout<<"* ";
			}
		cout<<"\n";
	}
	return 0;
}
