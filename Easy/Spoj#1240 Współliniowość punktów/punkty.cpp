#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

	short int t, x1, x2, x3, y1, y2, y3;
	double a1, a2;

	cin>>t;

	while(t--)
	{
		cin>>x1>>y1>>x2>>y2>>x3>>y3;

		if(x1 == x2 and x3 == x2) cout<<"TAK\n";
		else if(y1 == y2 and y3 == y2) cout<<"TAK\n";
		else{
			a1 = ((double)y2-(double)y1)/((double)x2-(double)x1);
			a2 = ((double)y3-(double)y2)/((double)x3-(double)x2);

			if(a1 == a2) cout<<"TAK\n";
			else cout<<"NIE\n";
		}
	}

	return 0;
}
