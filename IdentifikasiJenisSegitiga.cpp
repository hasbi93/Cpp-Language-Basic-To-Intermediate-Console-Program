#include<iostream>
#include<cmath>
#include<cstdlib>

/* ADA KESALAHAN LOGIKA DALAM ALGORITMA INI!! HARAP DIPERHATIKAN */

using namespace std;

int main()
{	
	float a,b,c,A,B,C,hasil,hasil2,hasil3;
	cout<<"Masukkan 3 Sisi dari Panjang Segitiga yang Ingin diidentifikasi Jenisnya. \n";
	cin>>a>>b>>c;
	if (a>=b && a>=c)
		{
			C=a;
			if(b>=c)
				{
					B=b;
					A=c;
				}
			else
				{
					B=c;
					A=b;
				}
		}
	else if (b>=a && b>=c)
			{
				C=b;
				if(a>=c)
					{
						B=a;
						A=c;
					}
				else
					{
						B=c;
						A=a;
					}
			}
		else if(c>=a && c>=b)
				{
					C=c;
					if(a>=b)
						{
							B=a;
							A=b;	
						}	
					else
						{
							B=b;
							A=a;
						}
				}
			else
				{
					cout<<"Angka yang Anda Masukkan Salah. \n";
				}
	hasil=pow(A,2);
	hasil2=pow(B,2);
	hasil3=pow(C,2);
	if (hasil<=(hasil2+hasil3))
		{
			cout<<"Segitiga Lancip dengan Sudut Lancip di A. \n";
		}
		else if (hasil2<=(hasil+hasil3))
				{
					cout<<"Segitiga Lancip dengan Sudut Lancip di B. \n";
				}
			else if(hasil3<=(hasil+hasil2))
				{
					cout<<"Segitiga Lancip dengan Sudut Lancip di C. \n";
				}
				else if(hasil>=(hasil2+hasil3))
						{
							cout<<"Segitiga Tumpul dengan Sudut Tumpul di A. \n";
						}
					else if(hasil2>=(hasil+hasil3))
							{
									cout<<"Segitiga Tumpul dengan Sudut Tumpul di B. \n";
							}	
						else if(hasil3>=(hasil+hasil2))
								{
										cout<<"Segitiga Tumpul dengan Sudut Tumpul di C. \n";
								}
							else if(hasil==(hasil2+hasil3))
									{
											cout<<"Segitiga Siku-Siku dengan Sudut Siku-Siku di A. \n";
									}
								else if(hasil2==(hasil+hasil3))
										{
												cout<<"Segitiga Siku-Siku dengan Sudut Siku-Siku di B. \n";
										}
									else if(hasil3==(hasil+hasil2))
											{
													cout<<"Segitiga Siku-Siku dengan Sudut Siku-Siku di C. \n";
											}
										else
											{
													cout<<"Segitiga Imaginer alias Error. \n";
											}
	return 0;
}

