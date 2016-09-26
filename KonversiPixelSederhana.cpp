#include<iostream>

using namespace std;

int main()
{
	long int pixel;
	cout<<"Masukkan Nilai Pixel: \n";
	cin>>pixel;
	if (pixel<=0)
		{
			pixel=0;
		}
	else if(pixel>=255)
		{
			pixel=255;
		}
		else
			{
				pixel=pixel;
			}
	cout<<"Nilai Pixel:"<<pixel;
	return 0;
}
