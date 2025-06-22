#include <iostream>

using namespace std;

int stack[10], value, i = 0;
int sizeOfStack = 0;

char sign;

int main()
{
	while(cin>>sign)
	{
		if(sign == '+')
		{
			cin>>value;

			if(sizeOfStack < 10)
			{
				stack[sizeOfStack++] = value;
				cout<<":)\n";
			}else{
				cout<<":(\n";
			}
		}

		if(sign == '-')
		{
			if(sizeOfStack <= 0)
			{
				cout<<":("<<endl;
			}else{
				cout<<stack[sizeOfStack-1]<<endl;
				sizeOfStack--;
			}
		}
	}
}