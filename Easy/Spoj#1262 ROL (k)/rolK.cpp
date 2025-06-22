#include <iostream>

using namespace std;

int sizeOfArray, offSet;

int main()
{
	cin>>sizeOfArray>>offSet;

	int *tab = new int[sizeOfArray + offSet];

	for(int i = 0; i < sizeOfArray; i++)
	{
		cin>>tab[i];
	}

	for(int i = 0; i < offSet; i++)
	{
		tab[sizeOfArray+i] = tab[i];
	}

	for(int i = 0; i < sizeOfArray; i++)
	{
		cout<<tab[i + offSet]<<" ";
	}
}