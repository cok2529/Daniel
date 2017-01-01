#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Point
{
public:
	int x;
	int y;
};

int main(void)

{
	int x, y;
	cout << "Point Input : ";
	cin >> x >> y;

	Point p;
	p.x = x;
	p.y = y;

	cout << "picture" << endl;

	return 0;
}

