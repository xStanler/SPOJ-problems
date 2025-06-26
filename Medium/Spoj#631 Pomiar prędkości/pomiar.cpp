#include <iostream>
/* #include <cmath> */

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int N, t, pomiar, maxV, minV;

	cin>>t;

	while(t--)
	{
		cin>>N;

		maxV = 0;
		minV = 0;

		while(N--) {
			cin>>pomiar;

			maxV += pomiar;

			minV -= pomiar;

			if(minV < 0) minV *= -1;
		}	

		cout<<minV<<' '<<maxV<<'\n';
	}

	return 0;
}
