#include <iostream>

using namespace std;

int x, counter1 = 0, previous = 0, i = 0;

int main()
{

	while(cin>>x)
	{
		if(x == 42 && previous != 42 && i != 0)
		{
			counter1++;
		}

		if(counter1 == 3) 
		{
			cout<<x<<endl;
			break;
		}
		cout<<x<<endl;

		previous = x;
		i++;
	}
}