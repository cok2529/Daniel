#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Point 
{
	int x;
	int y;

public:
	int GetX() {return x;}
	int GetY() {return y;}

	void SetX(int _x) { x = _x; }
	void SetY(int _y) { y = _y; }

};

int main ()
{
	int x, y;
	cout << " Point input : " ;
	cin >> x >> y;

	Point p;
	p.SetX(x);
	p.SetY(y);

	cout << "Display" << endl;

	return 0;
}

