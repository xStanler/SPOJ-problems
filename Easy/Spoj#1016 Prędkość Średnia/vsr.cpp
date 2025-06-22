#include <iostream>

using namespace std;

int v1, v2;

int main()
{
	int t;
	cin>>t;

	for(int i =0; i<t; i++)
	{
		cin>>v1>>v2;

		int vsr = ((2*v1*v2)/(v1+v2));

		cout<<vsr<<endl;
	}
}