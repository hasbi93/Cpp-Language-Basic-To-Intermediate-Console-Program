#include<iostream>

using namespace std;

int main()
{
	long int bilbul;	
	cout << "Masukkan Nilai Bilangan Bulat Positif Yang Anda Inginkan. \n";
	cin>> bilbul;
	if (bilbul%4==0)
	{
		cout<<"Angka yang anda masukkan, habis dibagi empat. \n";
	}
	else
	{
		cout<<"Angka yang anda masukkan, tidak habis dibagi empat. \n";
	}
	return 0;
}
