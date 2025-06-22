#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MAXN = 1e7;

bool primes[MAXN];
vector<long long> prime;

void sito()
{
	long long i, j, zakres;

	zakres = sqrt(MAXN)+1;

	primes[0] = primes[1] = 1;

	for(i = 2; i <= zakres; i++)
	{
		if(primes[i]) continue;
		else{

			prime.push_back(i);
			for(j = i*i; j <= MAXN; j += i)
				primes[j] = 1;

		}
	}
}

int main()
{
	cin.tie(0); ios_base::sync_with_stdio(false);

	int t, n, m, i;
	bool isPrime;
	cin>>t;

	sito();

	for(long long p: prime)
		cout<<p<<' ';

	/* while(t--) */
	/* { */
	/* 	cin>>n>>m; */
	/*  */
	/* 	for(i = n; i <= m; i++) */
	/* 	{ */
	/* 		if(i < MAXN && primes[i] == 0) */
	/* 			cout<<i<<'\n'; */
	/* 		else{ */
	/* 			isPrime = 1; */
	/* 			for(int p: prime) */
	/* 			{ */
	/* 				if(i%p == 0) isPrime = 0; */
	/* 			} */
	/*  */
	/* 			if(isPrime) cout<<i<<'\n'; */
	/* 		} */
	/* 	} */
	/*  */
	/* 	cout<<'\n'; */
	/* } */

	return 0;
}
