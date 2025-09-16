#include <iostream>

using namespace std;

int t = 0;
int a = 0;
int b = 0;

int x, z;

int nwd(int a, int b)
{
	int NWD = 0;

	x = a;

	while( x > 0 )
	{
		z = x;

		x = b % x;

		b = z;
	}

	NWD = b;

	return NWD;
}

int main()
{
	cin>>t;

	for(int i = 1; i <= t; i++)
	{
		cin>>a>>b;

		cout<<nwd(a, b)<<endl;
	}
}
