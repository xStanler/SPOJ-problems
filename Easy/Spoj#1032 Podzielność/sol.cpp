#include <iostream>

using namespace std;

int main()
{
	int t, n, x, y;

	cin>>t;

	for(int i = 0; i < t; i++)
	{
		cin>>n>>x>>y;

		int b = 0;
		while(x*b < n)
		{
			int a = x*b;
			if (a%y != 0) cout<<a<<" ";
			b++;
		}
		cout<<endl;
	}
}
