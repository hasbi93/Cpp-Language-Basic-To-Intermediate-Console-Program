#include<iostream>

using namespace std;

int main()
{
	long int i,n,j;
	j=0;
	cout<<"Masukkan N Pengulangan: \n";
	cin>>n;
	for (i=1; i<=n; i=i+1)
		{
			j=j+i;
			cout<<j<<"\n";
		}
	return 0;
}
