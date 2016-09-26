#include<iostream>

using namespace std;

int main()
{
	long int i,j,m,n,r,x;
	j=0;
	cout<<"Program Penghitung Rerata Nilai Masukan: \n"<<"Masukkan N Perulangan: \n";
	cin>>n;
	for(i=1;i<=n;i=i+1)
		{
			cout<<"Masukkan jumlah yang ingin anda masukkan: \n";
			cin>>x;
			j=j+x;
			cout<<"Jumlah Deret Sementara: "<<j<<"\n";
		}
	r=j/n;
	m=j%n;
	cout<<"Rerata Deret ("<<j<<":"<<n<<") = "<<r<<"\n"<<" Mod(%) = "<<j<<" % "<<n<<" = "<<m;
	return 0;
}
