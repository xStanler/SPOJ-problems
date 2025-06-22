#include <iostream>

using namespace std;

long int silnia(int a)
{
	if(a == 1) return 1;
	else {
		return a * silnia(a-1);
	}
}

int main()
{
	int t, n;

	cin>>t;
	for(int i = 0; i < t; i++)
	{
		cin>>n;
		long int ans = silnia(n);

		while (ans%10 == 0)
		{
			ans = ans/10;
		}

		cout<<ans%10<<endl;
	}
}