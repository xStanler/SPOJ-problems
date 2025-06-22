#include <iostream>

using namespace std;

int main()
{
	cin.tie(0); ios_base::sync_with_stdio(false);

	int t, s, n;
	cin>>t;

	while(t--)
	{
		cin>>s;
	
		n = 0;
		while(s != 1)
		{
			if(s%2 == 0)
				s /= 2;
			else
				s = 3*s + 1;
			n++;
		}

		cout<<n<<'\n';
	}

	return 0;
}
