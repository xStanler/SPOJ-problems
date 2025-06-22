#include <iostream>

using namespace std;

int main()
{
	int t, n;
	cin>>t;
	for( int i = 0; i < t; i++ )
	{
		cin>>n;
		int sil[] = {0, 1, 2, 6, 4, 2, 2, 4, 2, 8};
		if( n<10 ) cout<<sil[n]<<endl;
		else {
			int a = (int)(n/10);
			
			int pocz = sil[9];

			for ( int i = 1; i < a-1; i++ )
			{
				pocz = (pocz*4)%10;
				pocz *= (i+1);
			}

			cout<<pocz<<endl;

			/* int b = n%10; */
			/* if (b == 2 || b == 7) cout<<(sil[9]*2)%10; */
			/* else if ( b == 4 || b == 9) cout<<(sil[9]*4)%10; */
			/* else { */
			/* 	cout<<sil[9]; */
			/* } */
			/* cout<<endl; */
		}
	}
}
