#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int main()
{	
	float A,B,C,hasil,hasil2,hasil3;
	cout<<"Masukkan 3 Sisi dari Panjang Segitiga yang Ingin diidentifikasi Jenis Sudutnya. \n";
	cin>>A>>B>>C;
	hasil=pow(A,2);
	hasil2=pow(B,2);
	hasil3=pow(C,2);
	if (hasil<=(hasil2+hasil3))
		{
			cout<<"Sudut Lancip di A. \n";
		}
		else if (hasil2<=(hasil+hasil3))
				{
					cout<<"Sudut Lancip di B. \n";
				}
			else if(hasil3<=(hasil+hasil2))
					{
						cout<<"Sudut Lancip di C. \n";
					}
				else
					{
						cout<<"................. \n";
					}	
	if(hasil>=(hasil2+hasil3))
		{
			cout<<"Sudut Tumpul di A. \n";
		}
		else if(hasil2>=(hasil+hasil3))
				{
					cout<<"Sudut Tumpul di B. \n";
				}	
				else if(hasil3>=(hasil+hasil2))
					{
						cout<<"Sudut Tumpul di C. \n";
					}
					else
						{
							cout<<".................. \n";
						}
	if(hasil==(hasil2+hasil3))
		{
			cout<<"Sudut Siku-Siku di A. \n";
		}
		else if(hasil2==(hasil+hasil3))
				{
					cout<<"Sudut Siku-Siku di B. \n";
				}
			else if(hasil3==(hasil+hasil2))
					{
						cout<<"Sudut Siku-Siku di C. \n";
					}
				else
					{
						cout<<".................... \n";
					}
	return 0;
}

