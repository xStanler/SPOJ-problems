#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	int r=5, i, j;
	
	cin>>r;

	while(r != 0)
	{
		if(r > 0)
		{
			for(i = 0; i < 2*r; i++)
			{
				for(j = 0; j < 2*r; j++)
				{
					if(i<r && j < r)
					{
						if(j <= i) cout<<'*';
						else cout<<'.';
					}else if(i < r && j >= r)
					{
						if(j <= 2*r - i-1) cout<<'*';
						else cout<<'.';
					}else if(i >= r && j < r)
					{
						if(j < 2*r - i-1) cout<<'.';
						else cout<<'*';
					}else{
						if(j >= i) cout<<'*';
						else cout<<'.';
					}
				}
				cout<<'\n';
			}
		}else{
			r = abs(r);
			for(i = 0; i < 2*r; i++)
			{
				for(j = 0; j < 2*r; j++)
				{
					if(i < r && j < r)
					{
						if(j >= i) cout<<'*';
						else cout<<'.';
					}else if(i < r && j >= r)
					{
						if(j < 2*r - i-1) cout<<'.';
						else cout<<'*';
					}else if(i >= r && j < r)
					{
						if(j <= 2*r - i - 1) cout<<'*';
						else cout<<'.';
					}else{
						if(j <= i) cout<<'*';
						else cout<<'.';
					}
				}
				cout<<'\n';
			}
		}

		cin>>r;
		cout<<'\n';
	}

	return 0;
}
