// 复制构造函数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Point {
public:
	Point(int xx = 0, int yy = 0) {
		x = xx;
		y = yy;
	}
	Point(const Point&p);
	int getX() { return x; }
	int getY() { return y; }
private:
	int x, y;
};

//成员的实现
Point::Point(const Point&p) {
	x = p.x;
	y = p.y;
	cout << "calling the copy constructor" << endl;
}
	void fun1(Point p) {
		cout << p.getX() << endl;
	}
	Point fun2() {
		Point a;
		return a;
	}


int main()
{
	Point a;
	Point b(a);
	cout << b.getX() << endl;
	fun1(b);
	b = fun2();
	cout << b.getX() << endl;
    return 0;
}

