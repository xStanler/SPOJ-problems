#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int N, i, len;
	string tmp;
	map<char, int> literyM, literyD;

	cin>>N;

	cin.ignore();

	while(N--)
	{
		getline(cin, tmp);
		len = tmp.length();

		for (i = 0; i < len; i++)
		{
			if(tmp[i] == ' ') continue;

			if(tmp[i] < 95){

				if(literyD.count(tmp[i]) == 0)
					literyD[tmp[i]] = 1;
				else{ literyD[tmp[i]]++; }

			}else{

				if(literyM.count(tmp[i]) == 0)
					literyM[tmp[i]] = 1;
				else{ literyM[tmp[i]]++; }

			}
		}
	}

	for(auto it : literyM) {
		cout<<it.first<<' '<<it.second<<'\n';
	}

	for(auto it : literyD) {
		cout<<it.first<<' '<<it.second<<'\n';
	}

	return 0;
}
