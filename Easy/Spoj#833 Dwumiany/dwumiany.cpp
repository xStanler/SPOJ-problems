#include <iostream>

using namespace std;

int NWD(int a, int b)
{
	int pom;

	while(b!=0)
	{
		pom = b;
		b = a%b;
		a = pom;
	}

	return a;
}

int main()
{
	cin.tie(0); ios_base::sync_with_stdio(false);

	int T, n, k, i, y, z, tmp;
	long long int x;
	cin>>T;

	while(T > 0)
	{
		cin>>n>>k;
		x = 1;
		z = 1;

		if(n == k || k == 0) 
		{
			cout<<1<<"\n";
		}else if(n == k+1){
			cout<<n<<"\n";
		}else{
			y = min(k, n-k);
			for(i = 1; i <= y; i++)
			{
				x *= (n-y+i);
				z *= i;
				
				tmp = NWD(x, z);
				x /= tmp;
				z /= tmp;
			}

			cout<<x/z<<'\n';
		}

		T--;
	}
}
