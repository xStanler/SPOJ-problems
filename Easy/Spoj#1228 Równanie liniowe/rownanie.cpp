#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cin.tie(0); ios_base::sync_with_stdio(false);
	
	float a, b, c;
	float x;
	cin>>a>>b>>c;

	if(a == 0)
		if(b == c) cout<<"NWR";
		else cout<<"BR";
	else{
		x = (c-b)/a;
		printf("%.2f", x);
	}

	return 0;
}
