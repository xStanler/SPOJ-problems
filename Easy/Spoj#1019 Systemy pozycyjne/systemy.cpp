#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(0); ios_base::sync_with_stdio(false);

	int t, n, x;
	string a, b;
	cin>>t;

	while(t--)
	{
		cin>>n;
		x = n;
		a = "";
		b = "";
		
		while(n > 0)
		{
			if(n%16 < 10)	a = to_string(n%16) + a; 
			else{
				switch(n%16){
					case 10:
						a = "A" + a;
						break;
					case 11:
						a = "B" + a;
						break;
					case 12:
						a = "C" + a;
						break;
					case 13:
						a = "D" + a;
						break;
					case 14:
						a = "E" + a;
						break;
					case 15:
						a = "F" + a;
						break;
				}
			}

			n /= 16;
		}

		while(x > 0)
		{
			if(x%11 < 10) b = to_string(x%11) + b;
			else if(x%11 == 10) b = "A" + b;

			x /= 11;
		}

		cout<<a<<' '<<b<<'\n';
	}

	return 0;
}
