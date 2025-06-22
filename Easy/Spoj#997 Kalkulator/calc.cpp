#include <iostream>

using namespace std;

char sign;

int a, b;

int main()
{
	while(cin>>sign>>a>>b)
	{
		switch(sign)
		{
			case '+':
				cout<<a+b<<endl;
				break;
			case '-':
				cout<<a-b<<endl;
				break;
			case '*':
				cout<<a*b<<endl;
				break;
			case '/':
				cout<<a/b<<endl;
				break;
			case '%':
				cout<<a%b<<endl;
				break;
		}
	}
}