#include<iostream>

using namespace std;

int main()
{
	long int i,j,m,r,x;
	i=1;
	j=0;
	cout<<"Program Hitung Jumlah,Rerata dan Mod Angka Masukan \n";
	cout<<"Masukkan Angka Pertama: \n";
	cin>>x;
	if(x!=0)
		{
			while(x!=0)
				{
					i=i+1;
					j=j+x;
					cout<<"Jumlah Sementara= "<<j<<" Angka yang dimasukkan= "<<x<<"\n";
					cout<<"Masukkan Angka 0 Jika Anda Ingin Mengakhiri Operasi \n";
					cout<<"Masukkan Angka yang Ingin Anda Jumlahkan: \n";
					cin>>x;
					if(x==0)
						{
							i=i-1;
							r=j/i;
							m=j%i;
							cout <<"Deret Bilangan Akhir (i) = "<<i<<"\n";
							cout<<"Rerata (j Div i) = "<<r<<"\n" 	;
							cout<<"Mod (j Mod i) = "<<m<<"\n";
						}
					else
						{
							cout<<"Deret Bilangan Sementara (i)= "<<i<<"\n";	
						}
				}
		}
	else
		{
			cout<<"Tidak Ada Data yang Dimasukkan \n";
		}
	return 0;
}
