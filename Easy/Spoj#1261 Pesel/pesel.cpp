#include <iostream>

using namespace std;


long long int pow(long long int a, int b)
{
	if(b == 0) return 1;
	else { return a * pow(a, b-1); }
}

int main()
{
	int n;
	cin>>n;

	for(int i = 0; i < n; i++)
	{
		long long int number = 0;
		cin>>number;

		int tab[11];
		long long int x = 0;
		long long int y = 10;
		int result = 0;

		for(int i = 0; i<11; i++)
		{
			tab[i] = (number%pow(y, i+1) - x)/pow(y,i);
			x+=tab[i]*pow(y, i);
		}

		for(int i = 0; i<11; i++)
		{
			int z = 0;

			if(i == 10 || i == 6 || i == 2 || i == 0) z = 1;

			if(i == 9 || i == 5 || i == 1) z = 3;

			if(i == 7 || i == 3) z = 9;

			if(i == 8 || i == 4) z = 7;

			result += (tab[i]) *z;
		}

		if(result%10 == 0)cout<<"D"<<endl;
		else { cout<<"N"<<endl;}
	}

	return 0;
}