#include <iostream>

using namespace std;

int memory[10];
int i, x;
char sign;

int main()
{
	while(cin>>sign)
	{
		int result = 0;

		cin>>i>>x;

		switch(sign)
		{
			case 'z':
				memory[i] = x;
				break;
			case '+':
				result = memory[i] + memory[x];
				cout<<result<<endl;
				break;
			case '-':
				result = memory[i] - memory[x];
				cout<<result<<endl;
				break;
			case '*':
				result = memory[i] * memory[x];
				cout<<result<<endl;
				break;
			case '/':
				result = memory[i] / memory[x];
				cout<<result<<endl;
				break;
			case '%':
				result = memory[i] % memory[x];
				cout<<result<<endl;
				break;
		}
	}

	return 0;
}