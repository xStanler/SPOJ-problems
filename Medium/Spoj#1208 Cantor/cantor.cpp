#include <bits/stdc++.h>

/* test egzample:
 *
 * Input: 17
 *
 * Output:
 * 16
 * 11 17
 * 7 12
 * 4 8 13
 * 2 5 9 14
 * 1 3 6 10 15
 */

using namespace std;

#define MAXN 200001

vector<int> nums[MAXN]; //initializing array of vectors for our triagnle

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n, i, j, tmp = 0;

	cin>>n;

	i = 1, j = 0;
	while(i <= n)
	{
		for(j = tmp; j >= 0; j--) {
			nums[j].push_back(i); // adding number {1 .. n} to corresponding row and coordinate eg. 1 -> [0, 0],  2 -> [1, 0]

			if(i > n) break;

			i++;
		}

		
		tmp++;
	}

	for(i = tmp-1; i >= 0; i--) // printing our triangle in reverse order it was stored
	{
		for(auto x : nums[i])
			if(x <= n) cout<<x<<' ';
		cout<<'\n';
	}
	
	return 0;
}
