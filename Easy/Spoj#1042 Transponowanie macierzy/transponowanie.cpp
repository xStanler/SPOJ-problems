#include <iostream>

using namespace std;

int macierz[200][200];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

	int m, n, i, j;

	cin>>m>>n;

	for(i = 0; i<m; i++)
	{
		for(j = 0; j < n; j++)
		{
			cin>>macierz[i][j];
		}
	}

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			cout<<macierz[j][i]<<' ';
		}
		cout<<'\n';
	}

	return 0;
}
