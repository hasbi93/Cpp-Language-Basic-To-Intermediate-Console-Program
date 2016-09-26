#include<iostream>

using namespace std;

int main()
{	
	struct rom
	{
		long int i,v,x,l,c,d,m;
	};
	rom r;
	long int angka,sisa,sisa2,sisa3,sisa4,sisa5;
	long int I,V,X,L,C,D,M;
	cout<<"Masukkan angka yang ingin anda ubah ke Angka/Jumlah Bilangan Romawi. \n";
	cin>>angka;
	r.m=angka/1000;
	sisa=angka%1000;
	r.d=sisa/500;
	sisa2=sisa%500;
	r.c=sisa2/100;
	sisa3=sisa2%100;
	r.l=sisa3/50;
	sisa4=sisa3%50;
	r.x=sisa4/10;
	sisa5=sisa4%10;
	r.v=sisa5/5;
	r.i=sisa5%5;
	cout<<r.m<<" M "<<r.d<<" D "<<r.c<<" C "<<r.l<<" L "<<r.x<<" X "<<r.v<<" V "<<r.i<<" I ";
	return 0;
}
