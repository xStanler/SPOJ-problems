#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n, i, tmp;

	cin>>n;

	if(n == 0) cout<<'0';
	else if(n <= 2) cout<<"NIE";
	else{
		cout<<n-n/2<<' ';

		for(i = 0; i<n/2; i++)
		{
			cout<<i<<' '<<n-i<<' ';
		}

		if(n%2 != 0) cout<<(n-n/2)-1;
	}

	return 0;
}
