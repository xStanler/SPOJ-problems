#include <iostream>

using namespace std;

int sum = 0;
int n = 0;
int number = 0;
int t = 0;

int main(){
	cin>>t;
	
	for(int j = 1; j <= t; j++)
	{
		cin>>n;

		for(int i = 1; i <= n; i++){
			cin>>number;

			sum += number;
		}

		cout<<sum<<endl;
		sum = 0;
	}
}