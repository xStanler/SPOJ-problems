#include <iostream>
#include <vector>

using namespace std;

int n = 0;
int x = 0;
int t = 0;

int main(){
	cin>> t;

	for(int j = 0; j < t; j++)
	{
		cin>>n;
		
		vector<int> numbers;

		for(int i = 0; i < n; i++)
		{
			cin>>x;
			numbers.push_back(x);
		}

		for(int i = 0; i < numbers.size(); i++)
		{
			cout<<numbers[numbers.size()-i-1]<<" ";
		}
	}
}