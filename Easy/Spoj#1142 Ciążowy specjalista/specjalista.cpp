#include <iostream>

using namespace std;

int x, y, z;

int main()
{
	int d = 0;
	cin>>d;

	for(int i = 0; i < d; i++)
	{
		cin>>x>>y>>z;

		int lata = z-1;

		// int etap1 = (lata*y) - x;
		// int ciaza = (etap1*12) / lata;

		int etap1 = (x+y) - (z*y);

		int ciaza = (-12*etap1)/(lata);

		cout<<ciaza<<endl;
	}
}