#include <iostream>
#include <cmath>

using namespace std;

int t = 0;

int invitedPeople = 0;
double cookiesInOneBox = 0;
double secInDay = 60*60*24;
double result = 0;

int timeInSec = 0;

int main()
{
	cin>>t;

	for(int j = 0; j < t; j++)
	{
		result = 0;
		cin>>invitedPeople>>cookiesInOneBox;

		for(int i = 0; i < invitedPeople; i++)
		{
			cin>>timeInSec;

			result += floor(secInDay / timeInSec);
		}
	
		cout<<ceil(result / cookiesInOneBox)<<endl;
	}
}