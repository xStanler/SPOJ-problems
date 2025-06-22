#include <iostream>

using namespace std;

int t, n;

struct Punkt{
	string nazwa;
	int x;
	int y;
	int odleglosc;
};

int main()
{
	cin>>t;
	for(int j = 0; j < t; j++)
	{
		cin>>n;

	Punkt *points = new Punkt[n];

	for(int i = 0; i < n; i++)
	{
		cin>>points[i].nazwa;
		cin>>points[i].x;
		cin>>points[i].y;
		points[i].odleglosc = (points[i].x * points[i].x) + (points[i].y * points[i].y);
	}
	
	for(int j = 0; j < n -1; j++)
	{
		for(int i = 0; i < n -j -1; i++)
		{
			if(points[i].odleglosc > points[i+1].odleglosc)
			{
				Punkt punkt = points[i];
				points[i] = points[i+1];
				points[i+1] = punkt;
			}
		}
	}

	for(int i = 0; i < n; i++)
	{
		cout<<points[i].nazwa<<" ";
		cout<<points[i].x<<" ";
		cout<<points[i].y<<" ";
		cout<<endl;
	}

	delete [] points;
	}

	return 0;
}