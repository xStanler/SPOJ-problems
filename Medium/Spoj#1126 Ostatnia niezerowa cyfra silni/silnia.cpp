#include <iostream>

#define MAXN 1001

int silnia[MAXN];

int main() {
	std::ios_base::sync_with_stdio(false); std::cin.tie(0);

	int t, n, i;

	silnia[0] = 1;

	for(i = 1; i < MAXN; i++)
	{
		silnia[i] = silnia[i-1]*i;	

		while(silnia[i]%10 == 0)
			silnia[i] /= 10;

		silnia[i] %= (MAXN-1)*(MAXN-1);
	}

	std::cin>>t;

	while(t--) {
		std::cin>>n;

		std::cout<<silnia[n]%10<<'\n';
	}

	return 0;
}
