#include<iostream>

using namespace std;

int main()
{
	long int bilangan,bilangan2,bilangan3,a,b,c;
	cout<<"Masukkan Tiga Buah Bilangan Bulat Positif yang Ingin Anda Urutkan: \n";
	cin>>bilangan>>bilangan2>>bilangan3;
	if(bilangan>=bilangan2 && bilangan>=bilangan3)
		{
			c=bilangan;
			if(bilangan2>=bilangan3)
				{
					b=bilangan2,a=bilangan3;
				}
			else
				{
					b=bilangan3,a=bilangan2;
				}
		}
		else if (bilangan2>=bilangan && bilangan2>=bilangan3)
			{
				c=bilangan2;
				if (bilangan>=bilangan3)
					{
						b=bilangan,a=bilangan3;
					}
				else
					{
						b=bilangan3,a=bilangan;	
					}
			}
			else if (bilangan3>=bilangan && bilangan3>=bilangan2)
				{
					c=bilangan3;
					if (bilangan>=bilangan2)
						{
							b=bilangan,a=bilangan2;
						}
					else
						{
							b=bilangan2,a=bilangan;
						}
				}
				else
					{
						cout<<"Maaf, Angka yang Anda Masukkan Salah. \n" ;
					}
	cout<<"Urutan Bilangan yang Anda Masukkan dari Kecil ke Besar adalah "<<a<<" "<<b<<" "<<c;
	return 0;
}
