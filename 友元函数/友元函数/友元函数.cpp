// 友元函数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

class Point {
public:
	Point(int x = 0, int y = 0) : x(x),y(y) {  }
	int getX() { return x; }
	int getY() { return y; }

	//friend float dist(Point &a, Point &b);

	friend float dist(const Point &a, const Point &b);

private:
	int x, y;
};



/*float dist(Point &a, Point &b) {
	double x = a.x - b.x;
	double y = a.y - b.y;
	return static_cast<float>(sqrt(x * x + y * y));
}*/


//常引用做形参
float dist(const Point &a,const Point &b) {
	double x = a.x - b.x;
	double y = a.y - b.y;
	return static_cast<float>(sqrt(x * x + y * y));
}



int main()
{
	const Point p1(4, 5), p2(2, 3);
	cout << "The distance is:" << dist(p1, p2) << endl;
    return 0;
}

