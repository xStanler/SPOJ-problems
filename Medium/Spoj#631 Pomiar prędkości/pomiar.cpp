#include <bits/stdc++.h>

using namespace std;

#define MAXN 5001

vector<int> minV[MAXN];
vector<int> pomiary;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int N, t, pomiar, maxV, i;

	cin>>t;

	while(t--)
	{
		cin>>N;

		maxV = 0;

		for(i = 0; i < N; i++) {
			cin>>pomiar;

			maxV += pomiar;

			pomiary.push_back(pomiar);		
		}	

		minV[0].push_back(pomiary[0]);
		minV[1].push_back(abs(pomiary[0] - pomiary[1]));
		minV[1].push_back(pomiary[0] + pomiary[1]);

		for(i = 2; i < N; i++)
		{

			for(auto num: minV[i-1]) {
				minV[i].push_back(abs(num - pomiary[i]));
			}

		}

		sort(minV[N-1].begin(), minV[N-1].end());

		cout<<minV[N-1][0]<<' '<<maxV<<'\n';
	}

	return 0;
}
