#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string napis;

	while(getline(cin, napis))
	{
		for(int i = 0; i < napis.length(); i++)
		{
			if(napis[i] == '<')
			{
				while(napis[i] != '>')
				{
					napis[i] = toupper(napis[i]);
					i++;
				}
			}
		}

		cout<<napis<<endl;
	}
}