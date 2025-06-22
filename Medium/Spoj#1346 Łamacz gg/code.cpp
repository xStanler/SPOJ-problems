#include <iostream>
#include <string>

using namespace std;

char decode(char a, char b)
{
	char result;

	int first = int(a) - 65;
	int second = (int(b) - 65) * 16;

	result = char(first + second);

	return result;
}

int main()
{
	string text;
	while(cin>>text)
	{
		string haslo;
		for(int i = 0; i < 20; i+=2)
		{
			haslo += decode(text[i], text[i+1]);
		}
		cout<<haslo<<endl;
	}
}