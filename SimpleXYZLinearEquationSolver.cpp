#include<iostream>

using namespace std;

int main()
{	
	long int n,x,y,z;
	n=0;
	x=0;
	y=0;
	z=0;
	cout<<"Linear Equation: x+y+z=n; Insert N= \n";
	cin>>n;
	cout<<"X,Y,Z Probability Value: \n";
	for(x=0;x<=n;x++)
	{
		cout<<"x= "<<x<<"\n";
	}
	for(y=0;y<=n;y++)
	{
		cout<<"y= "<<y<<"\n";
	}
	for(z=0;z<=n;z++)
	{
		cout<<"z= "<<z<<"\n";
	}
	return 0;
}
