#include <iostream>

#define MAXN 2000005

int fib[MAXN];

int main() {
	std::ios_base::sync_with_stdio(false); std::cin.tie(0);

	int t, n, i;
	long long a, b, ans;

	std::cin>>t;

	fib[1] = 1;
	fib[2] = 1;

	for(i = 3; i < MAXN-1; i++) {
		fib[i] = (fib[i-1] + fib[i-2])%10;
	}

	while(t--)
	{
		std::cin>>n>>a>>b;

		a%=10;
		b%=10;

		if(n == 1) ans = a;
		else if(n == 2) ans = b;
		else {ans = ((a * fib[n-2]) + (b*fib[n-1]))%10; }

		std::cout<<ans<<'\n';
	}

	return 0;
}
