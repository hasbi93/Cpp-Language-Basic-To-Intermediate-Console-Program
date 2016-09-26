#include<iostream>

using namespace std;

int main()
{
	long int i,j,m,n,r,x;
	i=1;
	j=0;
	cout<<"Masukkan N Perulangan: \n";
	cin>>n;
	while(i<=n)
		{
			cout<<"Masukkan Angka yang Anda Inginkan: \n";
			cin>>x;
			cout<<"i = "<<i<<" j = "<<j<<"\n";
			j=j+x;
			i=i+1;
		}
	r=j/n;
	m=j%n;
	cout<<"Total J = "<<j<<"\n";
	cout<<"Rerata ("<<j<<"/"<<n<<") = "<<r<<" Mod ("<<j<<" Mod "<<n<<") = "<<m<<"\n";
	return 0;
}


