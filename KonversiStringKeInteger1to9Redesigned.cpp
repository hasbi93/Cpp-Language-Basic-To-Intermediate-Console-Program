#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
	char angka[100];
	long int angka2;
	cout<<"Masukkan Angka Satu-Sembilan dalam Huruf (Konversi String ke Integer) \n";
	cin>>angka;
	if(strcmp(angka,"satu")==0)
		{
			angka2=1;
			cout<<angka2;
		}
	else if(strcmp(angka,"dua")==0)
			{
				angka2=2;
				cout<<angka2;
			}
		else if(strcmp(angka,"tiga")==0)
				{
					angka2=3;
					cout<<angka2;
				}
			else if(strcmp(angka,"empat")==0)
					{
						angka2=4;
						cout<<angka2;
					}
				else if(strcmp(angka,"lima")==0)
						{
							angka2=5;
							cout<<angka2;
						}
					else if(strcmp(angka,"enam")==0)
							{
								angka2=6;
								cout<<angka2;
							}
						else if(strcmp(angka,"tujuh")==0)
								{
									angka2=7;
									cout<<angka2;
								}
							else if (strcmp(angka,"delapan")==0)
									{
										angka2=8;
										cout<<angka2;
									}
								else if(strcmp(angka,"sembilan")==0)
										{
											angka2=9;
											cout<<angka2;
										}
									else
										{
											cout<<"Maaf,angka yang anda masukkan salah.";
										}
	return 0;
}
