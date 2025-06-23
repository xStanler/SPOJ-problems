#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

	int D, L = 0, C = 0;

	cin>>D;

	while(D--) {
		cin>>L>>C;
		L--;

		if(L == 0) cout<<"TAK\n";
		else if(C == 0) cout<<"NIE\n";
		else if(C%L == 0) cout<<"NIE\n";
		else cout<<"TAK\n";

	}

	return 0;
}
