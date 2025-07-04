#include <iostream>
#include <cmath>

#define MAXN 1000005

int sumPref[MAXN];
bool primes[MAXN+1];

int main() {
	std::ios_base::sync_with_stdio(false); std::cin.tie(0);

	int N, a, b, i, j;
	int range = sqrt(MAXN);

	primes[0] = primes[1] = 1;
	for(i = 2; i < range+1; i++)
	{
		if(!primes[i])
			for(j = i*i; j < MAXN; j+=i)
				primes[j] = 1;
	}

	sumPref[0] = sumPref[1] = 0;
	for(i = 2; i < MAXN; i++)
	{
		sumPref[i] = sumPref[i-1];

		if(!primes[i]) sumPref[i]++;
	}

	std::cin>>N;
	
	while(N--) {
		std::cin>>a>>b;
	
		std::cout<<sumPref[b]-sumPref[a-1]<<'\n';
	}

	return 0;
}
