#include <bits/stdc++.h>

using namespace std;

vector<int> wyniki;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

	int D, N, x, maxi, maxi_count;

	cin>>D;

	while(D--)
	{
		wyniki.clear();
		maxi = -1;
		maxi_count = 0;

		cin>>N;

		while(N--)
		{
			cin>>x;

			wyniki.push_back(x);

			if(x > maxi)
			{
				maxi = x;
				maxi_count = 1;
			}else if(x == maxi) maxi_count++;


		}

		sort(wyniki.begin(), wyniki.end());
		
		while(maxi_count--)
		{
			cout<<maxi<<' ';
		}

		for(auto it : wyniki)
		{
			if(it != maxi) cout<<it<<' ';
		}

		cout<<'\n';
	}

	return 0;
}
