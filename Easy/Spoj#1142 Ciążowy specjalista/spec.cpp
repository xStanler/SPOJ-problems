#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int D, X, Y, Z;

	cin>>D;

	while(D--) {
		cin>>X>>Y>>Z;

		cout<<round(-12*(((float)X/((float)Z - 1)) - (float)Y))<<'\n';
	}

	return 0;
}
