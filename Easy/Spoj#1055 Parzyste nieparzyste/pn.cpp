#include <iostream>

using namespace std;

int x, sizeOfTab = 0;

int tab[100];

int main()
{
	// i = 0;

	int z;

	cin>>z;

	for(int j = 0; j < z; j++)
	{
		int t;
		sizeOfTab = 0;

	
		cin>>t;

		for(int i = 0; i < t; i++)
		{
			cin>>tab[i];
			sizeOfTab++;
		}


		for(int i = 0; i < sizeOfTab; i++)
		{
			if(i%2 != 0) cout<<tab[i]<<" ";
		}

		for(int i = 0; i < sizeOfTab; i++)
		{
			if(i%2 == 0) cout<<tab[i]<<" ";
		}

		cout<<endl;
	}
}