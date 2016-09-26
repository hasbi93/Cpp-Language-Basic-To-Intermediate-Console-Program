#include<iostream>

using namespace std;

int main()
{
	long int i,j,n;
	i=1;
	j=0;
	cout<<"Masukkan N Perulangan \n";
	cin>>n;
	while(i<=n)
		{
			cout<<"i = "<<i<<" j= "<<j<<"\n";
			j=j+i;
			i=i+1;
		}
	return 0;
}
