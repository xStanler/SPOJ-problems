#include <iostream>
#include <string>

using namespace std;

string napis;
string result = "";

int main()
{
	int z;

	cin>>z;

	for(int j = 0; j < z; j++)
	{
		cin>>napis;

		for(int i = 0; i < (napis.length())/2; i++)
		{
			result += napis[i];
		}

		cout<<result<<endl;
		result = "";
	}
}