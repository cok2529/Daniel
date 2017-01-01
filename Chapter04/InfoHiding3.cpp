#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Point 
{
	int x;
	int y;
public :
	int GetX()	{ return x; }
	int GetY()	{ return y; }

	void SetX(int _x);
	void SetY(int _y);
};

void Point::SetX(int _x) 
{
	if ( _x < 0 || _x > 100 )
	{	
		cout << "X Error" << endl;
		return;
	}
	x = _x;
}

void Point::SetY(int _y)
{
	if( _y < 0 || _y > 100 )
	{
		cout << "Y Error" << endl;
		return;
	}
	y = _y;
}

int main()
{
	int x, y;
	cout << "Point input : " ;
	cin >> x >> y;

	Point p;
	p.SetX(x);
	p.SetY(y);

	cout << " End " << endl;
	return 0;
}

