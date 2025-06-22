#include <iostream>
#include <string>

using namespace std;

string number = " ";
string invertedNumber = " ";

int times = 0;
int x = 0;

bool isPalindrome = false;

bool checkIsPalindrome(string n)
{
	invertedNumber = " ";

	for(int i = 0; i <= number.length()-1; i++) 
	{

		if(number[i] == number[number.length()-i-1])
		{
			isPalindrome = true;
		}else{
			isPalindrome = false;
		}

		invertedNumber +=number[number.length()-i-1];
	}

	return isPalindrome;
}

int main() {

	cin>>x;

	for(int i = 0; i <= x-1; i++){
		cin>>number;

		times = 0;
	
		while(checkIsPalindrome(number) == false)
		{
			times++;
			number = to_string(stoi(number) + stoi(invertedNumber));
			checkIsPalindrome(number);
		}

		cout<<number<<" "<<times<<endl;
	}
}