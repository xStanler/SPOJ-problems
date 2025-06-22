#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

	int i, N, x, y;
	short int b, D, a;

	cin>>D;

	while(D--) {
		cin>>N;
		x = 0;
		y = 0;
		while(N--) {
			cin>>a>>b;

			if(a == 0) y += b;
			else if(a == 1) y -= b;
			else if(a == 2) x -= b;
			else { x += b; }
		}

		if(x == 0 && y == 0) cout<<"studnia\n";
		if(y > 0) cout<<"0 "<<y<<'\n';
		if(y < 0) cout<<"1 "<<abs(y)<<'\n';
		if(x > 0) cout<<"3 "<<x<<'\n';
		if(x < 0) cout<<"2 "<<abs(x)<<'\n';
	}

	return 0;
}
