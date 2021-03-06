// 动态内存分配.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Point {
public:
	Point() :x(0),y(0){
		cout << "Default Construtor called" << endl;
	}
	Point(int x, int y) :x(x), y(y) {
		cout << "Construtor called" << endl;
	}
	~Point() {
		cout << "Destructor called" << endl;
	}
	int getX() { return x; }
	int getY() { return y; }
	void move(int newX,int newY) {
		x = newX; y = newY;
	}
private:
	int x, y;
};

int main()
{
	cout << "Step one: " << endl;
	Point *p1 = new Point;
	delete p1;
	cout << "Step two: " << endl;
	p1 = new Point(1, 2);
	delete p1;

    return 0;
}

