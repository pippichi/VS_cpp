// 类的组合程序.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

class Point {
public:
	Point(int xx = 0, int yy = 0) {
		x = xx;
		y = yy;
	}
	Point(Point &p);
	int getX() { return x; }
	int getY() { return y; }
private:
	int x, y;
};
Point::Point(Point &p) {
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor of Point " << endl;
}
class Line {
public:
	Line(Point xp1, Point xp2);
	Line(Line &l);
	double getLen() { return len; }
private:
	double len;
	Point p1, p2;

};
Line::Line(Point xp1, Point xp2):p1(xp1),p2(xp2) {
	cout << "Calling constructor of Line" << endl;
	double x = static_cast<double>(p2.getX() - p1.getX());
	double y = static_cast<double>(p2.getY() - p1.getY());
	len = sqrt(x * x + y * y);
}
Line::Line(Line &l) {
	cout << "Calling the copy constructor of Line" << endl;
	len = l.len;
}
int main()
{
	Point a(1, 1),b(4,5);
	Line line(a, b);
	Line line2(line);
	cout << "The length of line is: " << line.getLen() << endl;
	cout << "The length of line2 is: " << line2.getLen() << endl;
    return 0;
}

