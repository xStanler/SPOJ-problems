#include <iostream>

using namespace std;

int main(void)
{
	float A, B, C;
	while(cin>>A>>B>>C)
	{

		float delta = (B * B) - (4 * A * C);

		if (delta > 0)
			cout<<"2\n";
		else if (delta == 0) cout<<"1\n";
		else {
			cout<<"0\n";
		}
	}
}
