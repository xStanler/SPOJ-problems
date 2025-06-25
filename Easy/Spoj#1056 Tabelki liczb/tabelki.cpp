#include <iostream>

using namespace std;

#define MAXN  101

int tabela[MAXN][MAXN];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

	short int t, l, k, i, j;

	cin>>t;

	while(t--)
	{
		cin>>l>>k;
		for(i = 0; i < l; i++) {
			for(j = 0; j < k; j++) {
				cin>>tabela[i][j];
			}
		}

		cout<<'\n';

		for(i = 0; i < l; i++)
		{
			if(i == 0) {
				for(j = 1; j < k; j++) cout<<tabela[i][j]<<' ';

				cout<<tabela[i+1][k-1]<<'\n';
			}else if(i == l-1) {
				cout<<tabela[i-1][0];

				for(j = 0; j < k-1; j++) cout<<' '<<tabela[i][j];
			}else{
				cout<<tabela[i-1][0]<<' ';

				for(j = 1; j < k-1; j++) cout<<tabela[i][j]<<' ';

				cout<<tabela[i+1][k-1]<<'\n';
			}
		}
	}

	return 0;
}
