#include<iostream>

using namespace std;

int main()
{
	long int x;
	float s;
	s=0;
	cout<<"Fraction Counting Console Program \n";
	cout<<"Masukkan x yang Anda Inginkan Untuk Dijumlahkan Dalam 1/x: \n";
	cin>>x;
	while(x!=0)
	{
		s=s+1/(float)x;
		cout<<"Masukkan Angka 0 Jika Anda Ingin Menyudahi Operasi: \n";
		cout<<"Masukkan x dari 1/x yang Anda Inginkan: \n";
		cin>>x;
	}
	cout<<"S Total Adalah= "<<s<<"\n";
	return 0;
}
