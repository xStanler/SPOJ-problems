#include <iostream>

using namespace std;

int a = 0;

int b = 0;

int amountOfSameNumbers(int a, int b){
	int x = 0;

	if(a > b)
	{
		x = a - (a - b);
	}
	else if(b > a)
	{
		x = b - (b - a);
	}else if(a = b){
		x = a;
	}

	return x;
}

int main()
{
	int N = 0;

	cin>>N;

	for(int i = 0; i <= N-1; i++){
		cin>>a;
		cin>>b;

		int A = a;
		int twosA = 0;
		int threesA = 0;
		int fivesA = 0;
		int elevensA = 0;
		

		while(A > 1)
		{
			if(A%2 == 0)
			{
				twosA++;
				A = A /2;
			}
			else if(A%3 == 0)
			{
				threesA++;
				A = A /3;
			}
			else if(A%5 == 0)
			{
				fivesA++;
				A = A/5;
			}else if(A%11 == 0){
				elevensA++;
				A = A/11;
			}else{
				A = A/A;
			}
		}

		int B = b;
		int twosB = 0;
		int threesB = 0;
		int fivesB = 0;
		int elevensB = 0;

		while(B > 1)
		{
			if(B%2 == 0)
			{
				twosB++;
				B = B /2;
			}
			else if(B%3 == 0)
			{
				threesB++;
				B = B /3;
			}
			else if(B%5 == 0)
			{
				fivesB++;
				B = B/5;
			}else if(B%11 == 0){
				elevensB++;
				B = B/11;
			}else{
				B = B/B;
			}
		}

		int sameTwos = amountOfSameNumbers(twosA, twosB);
		int sameThrees = amountOfSameNumbers(threesA, threesB);
		int sameFives = amountOfSameNumbers(fivesA, fivesB);
		int sameElevens = amountOfSameNumbers(elevensA, elevensB);

		if(sameTwos == 0){
			sameTwos = 1;
		}else{
			sameTwos *= 2;
		}

		if(sameThrees == 0){
			sameThrees = 1;
		}else{
			sameThrees *= 3;
		}

		if(sameFives == 0){
			sameFives = 1;
		}else{
			sameFives *= 5;
		}

		if(sameElevens == 0){
			sameElevens = 1;
		}else{
			sameElevens *= 11;
		}

		int NWD = sameTwos * sameThrees * sameFives * sameElevens;

		int NWW = (a*b)/NWD;

		cout<<NWW<<endl;
	}
}