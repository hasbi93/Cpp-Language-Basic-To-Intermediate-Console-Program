/*
* Title               : Console Program Convert Latin Numerical to Roman Numeric (ConsoleProgramConvertLatinNumericalToRomanNumeric.cpp)
* Program Description : Write a C++ Language Program to Convert Latin Numerical to Roman Numerical.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro
*/

#include<iostream>

using namespace std;

int main()
{
	long int decimalNumber;
	long int j;
	long int m;
	long int d;
	long int c;
	long int l;
	long int x;
	long int ix;
	long int v;
	long int iv;
	long int i;
	
	cout<<"Console Program Converter Latin Numerical To Roman Numeric. \n";
	cout<<"Insert The Number (In Positive Integer Only) \n";
	cin>>decimalNumber;
	
	if(decimalNumber<=0)
	{
		cout<<"Wrong Number!! \n";
		cout<<"Press Enter to Close Program. \n";
	}
	
	m=decimalNumber/1000;
	decimalNumber=decimalNumber%1000;
	
	d=decimalNumber/500;
	decimalNumber=decimalNumber%500;
	
	c=decimalNumber/100;
	decimalNumber=decimalNumber%100;
	
	l=decimalNumber/50;
	decimalNumber=decimalNumber%50;
	
	x=decimalNumber/10;
	decimalNumber=decimalNumber%10;
	
	ix=decimalNumber/9;
	decimalNumber=decimalNumber%9;
	
	v=decimalNumber/5;
	decimalNumber=decimalNumber%5;
	
	iv=decimalNumber/4;
	decimalNumber=decimalNumber%4;
	
	i=decimalNumber;
	
	cout<<"Roman Numeral= ";
	
	for(j=1;j<=m;j++)
		{
			cout<<"M";
		}
	
	for(j=1;j<=d;j++)
		{
			cout<<"D";
		}
	for(j=1;j<=c;j++)
		{
			cout<<"C";
		}
	for(j=1;j<=l;j++)
		{
			cout<<"L";
		}
	for(j=1;j<=x;j++)
		{
			cout<<"X";
		}
	for(j=1;j<=ix;j++)
		{
			cout<<"IX";
		}
	for(j=1;j<=v;j++)
		{
			cout<<"V";
		}
	for(j=1;j<=iv;j++)
		{
			cout<<"IV";
		}
	for(j=1;j<=i;j++)
		{
			cout<<"I";
		}
	
	cout<<"\n";
	
	cout<<"Press Enter to Exit Program. \n";
	
	return 0;
}
