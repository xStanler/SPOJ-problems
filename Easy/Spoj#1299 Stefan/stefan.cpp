#include <iostream>

using namespace std;

#define MAXN 1000000

int costs[MAXN];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n, i, l, p; 
	long long profit = 0, sum = 0;

	cin>>n;

	for(i = 0; i < n; i++) {
		cin>>costs[i];
	}

	l = 0;
	p = l;

	for( i = 0; i < n; i++ )
	{
		sum += costs[i];

		if(sum < 0) {

			sum = 0;
		}

		if(sum > profit) profit = sum;
	}

	cout<<profit;

	return 0;
}
