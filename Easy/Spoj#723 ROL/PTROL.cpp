#include <iostream>

using namespace std;

int x;

int PTROL(int tab[])
{
	int first = tab[0];

	for(int i = 0; i < x-1; i++)
	{

		tab[i] = tab[i+1];
	}
	
	tab[x-1] = first;
}

int main()
{
	int z;

	cin>>z;

	for(int i = 0; i <z; i++)
	{
		cin>>x;

		int *tab = new int[x];

		for(int i = 0; i < x; i++)
		{
			cin>>tab[i];
		}

		PTROL(tab);

		for(int i = 0; i < x; i++)
		{
			cout<<tab[i]<<" ";
		}

		cout<<endl;

		delete [] tab;
	}

	return 0;
}