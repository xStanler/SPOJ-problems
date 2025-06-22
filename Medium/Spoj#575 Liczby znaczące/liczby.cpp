#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	const int SIZE = 1000000010;
	vector<int> tab;
	
	bool sito [100000];
	
	for(int i = 2; i <= sqrt(SIZE); i++)
	{
		if(sito[i]) continue;
		tab.push_back(i*i);
		for(int j = 2*i; j <= sqrt(SIZE); j+=i)
		{
			sito[j] = true;
		}
	}

	int t;
	cin>>t;
	
	while(t--)
	{
		int a, b, count = 0;
		cin>>a>>b;
	
		for(int i = 0; i < tab.size(); i++)
		{
			if(tab[i] >= a && tab[i] <= b)
			{
				count++;
			}else if(tab[i] > b) break;
		}
		
		cout<<count<<'\n';
	}
}
