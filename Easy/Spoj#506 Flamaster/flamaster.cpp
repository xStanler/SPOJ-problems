#include <iostream>
#include <string>

using namespace std;

string word = " ";
int value = 1;
string resault = " ";
char letter = ' ';
int C = 0;

int main()
{
	cin>>C;

	for(int j = 0; j < C; j++)
	{
		resault = " ";
		cin>>word;

		for(int i = 0; i < word.length(); i++)
		{
			if(word[i] == word[i+1] && word[i+1] == word[i+2]){
				letter = word[i];
				value = 2;
				i++;

				while(i < word.length()-1 && word[i+1] == letter)
				{
					value++;
					i++;
				}
				resault += letter + to_string(value);

			}else{
				resault += word[i];
			}
		}
		
		cout<<resault<<endl;
	}
}