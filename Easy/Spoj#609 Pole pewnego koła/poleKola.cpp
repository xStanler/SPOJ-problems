#include <iostream>

using namespace std;

#define PI 3.141592654

double r = 0;
double d = 0;

double height, Radius, area;

int main()
{
	cin>>r>>d;

	height = r - (d/2);

	Radius = ((2 * r) - height)* height;

	area = Radius * PI;

	cout<<fixed<<area<<endl;
}