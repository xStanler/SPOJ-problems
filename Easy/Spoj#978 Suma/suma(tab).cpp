#include <iostream>

using namespace std;

int main()
{
	int tab[100];
	int x = 0, sum = 0, i = 0;

	while(cin>>tab[i])
	{
		sum += tab[i];
		cout<<sum<<endl;

		i++;
	}

	return 0;
}